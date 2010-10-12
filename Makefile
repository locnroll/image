CC=g++
FLAGS= -Wall -pedantic

main: main.cc image.o pixel.o
	$(CC) -o main main.cc image.o pixel.o $(FLAGS)

image.o: image.h image.cc
	$(CC) -c image.cc $(FLAGS)

pixel.o: pixel.h pixel.cc
	$(CC) -c pixel.cc $(FLAGS)

clean:
	rm -r *.o

