#include "cola.h"
#include <stdio.h>

//Retorna verdadero si la cola esta vacía y falso en caso contrario.
bool vacia(Cola c){
	return vacia((Lista)c);
}

//Retorna el elemento que esta al frente de la cola.
tipoDato frente(Cola c){
	return recupera(primero((Lista)c), (Lista)c);
}

//Pone un elemento al final de la cola.
void ponerEnCola(tipoDato x, Cola &c){
	inserta(x, fin((Lista)c), (Lista&)c);
}

//Quita el primer elemento de la cola.
void quitarDeCola(Cola &c){
	suprime(primero((Lista)c), (Lista)c);
}

//Imprime la cola.
void imprimeCola(Cola c){
	if(vacia(c)){
		printf("\nCOLA VACIA!\n");
		return;
	}
	
	Cola aux;
	printf("\nCOLA: ");
	
	while(!vacia(c)){
		tipoDato x = frente(c);
		printf("%d -> ", x);
		ponerEnCola(x, aux);
		quitarDeCola(c);
	}
	
	printf("\n");
	
	while(!vacia(aux)){
		tipoDato x = frente(aux);
		ponerEnCola(x, c);
		quitarDeCola(aux);
	}
}

//Convierte a la cola en una cola vacía.
void anula(Cola &c){
	while(!vacia(c)){
		quitarDeCola(c);
	}
}
