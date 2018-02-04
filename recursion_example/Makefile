all:
	make recursion

recursion: recursion.o main.o
	g++ recursion.o main.o -o recursion

recursion.o: recursion.cpp recursion.hpp
	g++ -c recursion.cpp -Wall -Werror -ansi -pedantic

main.o: main.cpp recursion.hpp
	g++ -c main.cpp -Wall -Werror -ansi -pedantic

clean:
	rm -rf *.o recursion *~
