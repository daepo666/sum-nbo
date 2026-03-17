#Makefile
all: sum-nbo

sum-nbo: main.o add_n_print.o my_ntohl.o
	g++ -o sum-nbo main.o add_n_print.o my_ntohl.o

main.o: add_n_print.h main.cpp
	g++ -c -o main.o main.cpp

add_n_print.o: my_ntohl.h add_n_print.h add_n_print.cpp
	g++ -c -o add_n_print.o add_n_print.cpp

my_ntohl.o: my_ntohl.h my_ntohl.cpp
	g++ -c -o my_ntohl.o my_ntohl.cpp

clean:
	m -f sum-nbo
	rm -f *.o