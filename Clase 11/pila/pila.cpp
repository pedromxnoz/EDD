#include "pila.h"

//Retorna verdadero si la pila está vacía y falso en caso contrario.
bool vacia(Pila p){
	return vacia((Lista)p);
}

//Pone un elemento en la pila.
void push(tipoDato x, Pila &p){
	inserta(x, primero((Lista)p), (Lista)p);
}

//Saca el ultimo elemento de la pila.
void pop(Pila &p){
	suprime(primero((Lista)p), (Lista&)p); 
}

//Retorna el último elemento ingresado a la pila.
tipoDato top(Pila p){
	return recupera(primero((Lista)p), (Lista)p);
}

//Anula o vacía la pila.
void anula(Pila &p){
	while(!vacia(p)){
		pop(p);
	}
}

//Imprime la pila.
void imprime(Pila p){
	if(vacia(p)){
		printf("\nPILA VACIA!");
		return:
	}
	Pila aux;
	printf("\nPila:\n");
	
	while(!vacia(p)){
		tipoDato x = top(p);
		printf("%d\n", x);
		push(x, aux);
		pop(p);
	}
	while(!vacia(aux)){
		push(top(aux), p);
		pop(aux);
	}
}
