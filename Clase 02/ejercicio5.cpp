#include<stdio.h>

// Busque todos los posibles divisores de un numero.

int main(){
	int num, i;
	
	printf("\nIngrese un numero: ");
	scanf("%d", &num);
	
	while(num<=0){
		printf("\n//-----------------------------------//\n");
		printf("\nSolo numeros positivos y distintos de cero, ingrese un numero: ");
		scanf("%d", &num);
	}
	
	printf("\n//-----------------------------------//\n");
	printf("\nLos divisores son: ");
	
	for(i=1; i<=num; i++){
		if(num%i == 0){
			printf("%d ", i);
		}
	}	
	printf("\n\n");

	return 0;
}
