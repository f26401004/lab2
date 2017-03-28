all: main.o Elo_system.o
	g++ -o lab2 main.o Elo_system.o -lm
main.o: main.cpp Elo_system.h
	g++ -c main.cpp -lm
Elo_rating_system.o: Elo_system.cpp Elo_system.h
	g++ -c Elo_system.cpp -lm
clean: 
	rm lab2.*o

