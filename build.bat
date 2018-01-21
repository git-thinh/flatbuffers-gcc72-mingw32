

::g++ sample_text.cpp -o text.exe -I"H:\flatbuffers-gcc72-mingw32\include" -L"H:\flatbuffers-gcc72-mingw32\lib" -lflatbuffers -static-libgcc -std=c++11
::g++ sample_binary.cpp -o binary.exe -I"H:\flatbuffers-gcc72-mingw32\include" -L"H:\flatbuffers-gcc72-mingw32\lib" -lflatbuffers -static-libgcc -std=c++11
::call binary.exe
::call text.exe


g++ server.cpp greeter.grpc.fb.cc -o server.exe -I"H:\flatbuffers-gcc72-mingw32\include" -L"H:\flatbuffers-gcc72-mingw32\lib" -lflatbuffers -lgpr -lgrpc -lgrpc++ -static-libgcc -std=c++11 -O2


