all: programa

programa: main.o funkcijos.o
	g++ main.o funkcijos.o -o programa

main.o: main.cpp
	g++ -c main.cpp

funkcijos.o: funkcijos.cpp
	g++ -c funkcijos.cpp

clean: rm -rf *.o programa
