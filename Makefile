CC=g++
LFLAGS=-lSDL2 -lSDL2_image

main: main.o engine.o image.o 
	$(CC) main.o engine.o image.o -o main $(LFLAGS)

main.o: main.cpp
	$(CC) -c main.cpp

engine.o: src/engine.cpp include/Engine.hpp
	$(CC) -c src/engine.cpp

image.o: image/image.cpp image/Image.hpp
	$(CC) -c image/image.cpp

clean:
	rm *.o main

run:
	./main
