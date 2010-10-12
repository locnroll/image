FLAGS= -Wall -pedantic

main: main.cc image.o
	g++ -o main main.cc image.o $(FLAGS)

image.o: image.h image.cc pixel.o 
	g++ -c image.cc $(FLAGS)

pixel.o: pixel.h 
	g++ -c pixel.cc $(FLAGS)

clean:
	rm pixel.o
