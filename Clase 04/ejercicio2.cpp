#include <stdio.h>

//Reciba un número e indique si es par o no.

int numeropar(int num);

int main(){
	int num, retorno;
	
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	
	retorno = numeropar(num);
	
	printf("\n//-----------------------------------//\n");
	
	switch(retorno){
		case 1: printf("\nEl numero es PAR.\n\n"); break;
		case 2: printf("\nEl numero NO es PAR.\n\n"); break;
		default: printf("\nHa ocurrido un error.\n\n");
	}
	
	return 0;
}

int numeropar(int num){
	int resultado;
	
	if((num%2 == 0) && (num!=0) &&(num!=1)){
		resultado = 1; //1: El numero es par.
	}
	
	else{
		resultado = 2; //2: El numero no es par.
	}
	
	return resultado;
}
