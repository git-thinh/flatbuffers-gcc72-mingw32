FlatBuffers release 1.8.0
@aardappel aardappel released this on 21 Nov 2017 · 38 commits to master since this release

BUILD: 
	git clone https://github.com/google/flatbuffers.git
	cd flatbuffers
	cmake -G "MinGW Makefiles"  
	mingw32-make
	
TEST:
	g++ sample_text.cpp -o text.exe -I"H:\flatbuffers-gcc72-mingw32\include" -L"H:\flatbuffers-gcc72-mingw32\lib" -lflatbuffers -static-libgcc -std=c++11
	
	
	
	If you want to do it manually, you can compile all your .cpp files into object files: g++ -c *.cpp
	
	and link all the object files: g++ *.o -o a.out
	
	If ClassA.cpp is changed, you can just recompile ClassA.cpp: g++ -c ClassA.cpp
	
	and link them all again: g++ *.o -o a.out