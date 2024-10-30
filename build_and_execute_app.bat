:: Compilo los archivos en la carpeta src
g++ -Wall -std=c++11 -I.\include -c .\src\*.cpp

:: Compilo el archivo main.cpp
g++ -Wall -std=c++11 -I.\include -c main.cpp -o main.o

:: Compilo y enlazo todos los objetos generados en un solo ejecutable
g++ -Wall -std=c++11 *.o -o main.exe

:: Limpio los archivos objeto
DEL *.o
