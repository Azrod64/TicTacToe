LIBS=-lsfml-graphics -lsfml-window -lsfml-system

all: thegame

main.o: main.cpp
	g++ -c "main.cpp" -o main.o

ChessBoard.o: ChessBoard.cpp
	g++ -c "ChessBoard.cpp" -o ChessBoard.o

Cross.o: Cross.cpp
	g++ -c "Cross.cpp" -o Cross.o

Dot.o: Dot.cpp
	g++ -c "Dot.cpp" -o Dot.o

Game.o: Game.cpp
	g++ -c "Game.cpp" -o Game.o

thegame: Game.o ChessBoard.o Cross.o Dot.o main.o
	@echo "** Building the game"
	g++ -o thegame Game.o ChessBoard.o Cross.o Dot.o main.o  $(LIBS)

clean:
	@echo "** Removing object files and executable..."
	rm -f thegame *.o


