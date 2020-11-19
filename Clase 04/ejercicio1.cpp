#include <stdio.h>

//Reciba dos números y retorne el mayor de ambos.

int numeromayor(int num1, int num2);

int main(){
	int num1, num2, retorno;
	
	printf("Ingrese el primer numero: ");
	scanf("%d", &num1);
	
	printf("\nIngrese el segundo numero: ");
	scanf("%d", &num2);
	
	retorno = numeromayor(num1, num2);
	
	printf("\n//-----------------------------------//\n");
	printf("\nEl mayor numero es: %d\n\n", retorno);
	
	return 0;
}

int numeromayor(int num1, int num2){
	int resultado;
	
	if(num1 > num2){
		resultado = num1;
	}
	
	else{
		resultado = num2;
	}
	
	return resultado;
}
