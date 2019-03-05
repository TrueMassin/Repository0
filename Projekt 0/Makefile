CC = gcc

all: Main.o Passenger.o Subway.o Train.o
	$(CC) build/Main.o build/Passenger.o build/Subway.o build/Train.o -o bin/Metro

Main.o: src/Main.cpp include/Subway.h
	$(CC) src/Main.cpp -c -o build/Main.o
	
Passenger.o: src/Passenger.cpp include/Passenger.h
	$(CC) src/Passenger.cpp -c -o build/Passenger.o

Subway.o: src/Subway.cpp include/Subway.h
	$(CC) src/Subway.cpp -c -o build/Subway.o
	
Train.o: src/Train.cpp include/Train.h
	$(CC) src/Train.cpp -c -o build/Train.o

.PHONY: clean
clean:
	rm -f build/*.o
	rm -f bin/Metro
