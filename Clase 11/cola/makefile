all:
	g++ -c cola.cpp -o ./bin/cola.o
	g++ -c main.cpp -o ./bin/main.o
	g++ -c ../lista/lista.cpp -o ../bin/lista.o
	g++ ./bin/*.o -o main
	./main
	
clean:
	rm ./bin/*.o main
