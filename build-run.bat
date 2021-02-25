@echo off
mkdir debug
cd debug
cmake -G "MinGW Makefiles" ../
make
clear
.\Json_Parser.exe
pause
