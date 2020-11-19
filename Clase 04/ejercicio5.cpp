#include <stdio.h>

//Reciba un número y retorne la cantidad de divisores del número.

int cantdivisores(int num);

int main(){
	int num, retorno;
	
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	
	retorno = cantdivisores(num);
	
	printf("\n//-----------------------------------//\n");
	printf("\nLa cantidad de divisores de %d es: %d\n\n", num, retorno);
	
	return 0;
}

int cantdivisores(int num){
	int contador = 0;
	
	for(int i=1; i<=num; i++){
		if(num%i == 0){
			contador++;
		}
	}
	
	return contador;
}
