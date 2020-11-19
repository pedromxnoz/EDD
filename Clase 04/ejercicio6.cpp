#include <stdio.h>

//Reciba un número e indique si es primo o no.

int numeroprimo(int num);

int main(){
	int num, retorno;
	
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	
	retorno = numeroprimo(num);
	
	printf("\n//-----------------------------------//\n");
	
	switch(retorno){
		case 1: printf("\nEl numero es PRIMO.\n\n"); break;
		case 2: printf("\nEl numero NO es PRIMO.\n\n"); break;
		default: printf("\nHa ocurrido un error.\n\n");
	}
	
	return 0;
}

int numeroprimo(int num){
	int contador = 0;
	int resultado;
	
	for(int i=1; i<=num; i++){
		if(num%i == 0){
			contador++;
		}
	}
	
	if(contador==2){
		resultado = 1; //1: El numero es primo.
	}
	
	else{
		resultado = 2; //2: El numero no es primo.
	}
	
	return resultado;
}
