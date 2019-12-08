compiler=g++
VPATH=src:o_files

__: main
main : main.o game.o
	$(compiler) o_files/main.o ./o_files/game.o -o game.exe

main.o : main.cpp
	$(compiler) -c ./src/main.cpp -o ./o_files/main.o

game.o : game.cpp
	$(compiler) -c ./src/game.cpp -o ./o_files/game.o