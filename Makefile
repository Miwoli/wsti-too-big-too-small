compiler=g++
VPATH=src:o_files

__: main
main : main.o too-big.o
	$(compiler) o_files/main.o ./o_files/too-big.o -o too-big.exe

main.o : main.cpp
	$(compiler) -c ./src/main.cpp -o ./o_files/main.o

too-big.o : too-big.cpp
	$(compiler) -c ./src/too-big.cpp -o ./o_files/too-big.o