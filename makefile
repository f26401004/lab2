all: main.o Elo_system.o
	g++ -o lab2 main.o Elo_system.o
main.o: main.cpp Elo_system.h
	g++ -c main.cpp
Elo_rating_system.o: Elo_system.cpp Elo_system.h
	g++ -c Elo_system.cpp
clean: 
	rm lab2.*o

