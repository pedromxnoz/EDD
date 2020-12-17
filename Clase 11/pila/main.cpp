#include <stdio.h>
#include "pila.h"

int main(){
	Pila p;
	push(1, p);
	push(15, p);
	push(10, p);
	push(8, p);
	push(6, p);
	imprime(p);
	
	return 0;	
}
