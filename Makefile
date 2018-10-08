Array: main.o 
	g++ -std=c++11 -g -Wall main.o -o Array

main.o: main.cpp Array.h ArrayInterface.h
	g++ -std=c++11 -g -Wall -c main.cpp

clean:
	rm *.o Array