FlatBuffers release 1.8.0
@aardappel aardappel released this on 21 Nov 2017 · 38 commits to master since this release

https://github.com/google/flatbuffers/
http://google.github.io/flatbuffers/flatbuffers_guide_building.html

Building with CMake
The distribution comes with a cmake file that should allow you to build project/make files for any platform. For details on cmake, see http://www.cmake.org. In brief, depending on your platform, use one of e.g.:
cmake -G "Unix Makefiles"
cmake -G "Visual Studio 10"
cmake -G "Xcode"
-----------------------------------------------------------------------------
# Compiling the Monsters' Schema:
	cd bin
	flatc --cpp monster.fbs
	flatc --grpc --cpp greeter.fbs
	
-> general file: monster_generated.h, greeter.grpc.fb.cc, greeter.grpc.fb.h

# BUILD: 
	git clone https://github.com/google/flatbuffers.git
	cd flatbuffers
	cmake -G "MinGW Makefiles"  
	mingw32-make -D_WIN32_WINNT=0x0600
	
	cmake -D_WIN32_WINNT=0x0600 -G "MinGW Makefiles"  
	
cmake -DCMAKE_TOOLCHAIN_FILE=util/32-bit-toolchain.cmake -G "MinGW Makefiles"
	
	
	
# TEST: build.bat
	g++ sample_text.cpp -o text.exe -I"H:\flatbuffers-gcc72-mingw32\include" -L"H:\flatbuffers-gcc72-mingw32\lib" -lflatbuffers -static-libgcc -std=c++11
	g++ sample_binary.cpp -o binary.exe -I"H:\flatbuffers-gcc72-mingw32\include" -L"H:\flatbuffers-gcc72-mingw32\lib" -lflatbuffers -static-libgcc -std=c++11
	call binary.exe
	call text.exe
	
-----------------------------------------------------------------------------
If you want to do it manually, you can compile all your .cpp files into object files: g++ -c *.cpp
and link all the object files: g++ *.o -o a.out
If ClassA.cpp is changed, you can just recompile ClassA.cpp: g++ -c ClassA.cpp
and link them all again: g++ *.o -o a.out


Please learn about automake and autoconf.
Makefile.am is processed by automake to generate a Makefile that is processed by make in order to build your sources.
http://www.gnu.org/software/automake/

mingw32-make.exe makefile.in
make.exe makefile.in

