all: proj1

proj1: main.o equations.o
	g++ main.o equations.o -o proj1

main.o: main.cpp
	g++ -c main.cpp

equations.o: equations.cpp
	g++ -c -Wall -pedantic equations.cpp

clean:
	rm -rf *o proj1

