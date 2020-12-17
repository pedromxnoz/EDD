#include <stdio.h>
#include "cola.h"

int main(){
	Cola c;
	ponerEnCola(5, c);
	ponerEnCola(25, c);
	ponerEnCola(15, c);
	ponerEnCola(517, c);
	ponerEnCola(8, c);
	ponerEnCola(123, c);
	quitarDeCola(c);
	imprimeCola(c);	
	
	return 0;
}
