:: Compilo los archivos en la carpeta src
g++ -Wall -std=c++11 -I.\include -c .\src\Article.cpp .\src\Provider.cpp .\src\Order.cpp .\src\Item.cpp .\src\Employee.cpp

:: Compilo el archivo de prueba unitTest.cpp
g++ -Wall -std=c++11 -I.\include -c .\test\unitTest.cpp -o unitTest.o

:: Compilo y enlazo todos los objetos generados en un solo ejecutable
g++ -Wall -std=c++11 *.o -o test.exe

:: Limpio los archivos objeto
DEL *.o