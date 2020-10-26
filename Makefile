all: main.o
	g++ main.o -o complex_test

main.o: main.cpp complex.hpp
	g++ -c main.cpp

clean: 
	rm complex_test
	rm *.o
	
