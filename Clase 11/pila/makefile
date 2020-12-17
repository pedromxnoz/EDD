all:
	g++ -c pila.cpp -o .bin/pila.o
	g++ -c main.cpp -o .bin/main.o
	g++ -c ../lista/lista.cpp -o ../lista/lista.oh
	g++ ./bin/*.o -o main
	./main
	
clean:
	rm ./bin/*.o main
