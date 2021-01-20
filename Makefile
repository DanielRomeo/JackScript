
output: main.o ./jackstring/jackstring.o
	g++-7 -std=c++17 main.o ./jackstring/jackstring.o  -o output 

main.o: main.cpp
	g++-7 -std=c++17 -c main.cpp

jackstring.o: ./jackstring/jackstring.cpp ./jackstring/jackstring.h
	g++-7 -std=c++17 -c ./jackstring/jackstring.cpp

clean:
	rm *.o output