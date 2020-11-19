#include <stdio.h>

//Reciba tres números y retorne el mayor de los tres.

int numeromayor(int num1, int num2, int num3);

int main(){
	int num1, num2, num3, retorno;
	
	printf("Ingrese el primer numero: ");
	scanf("%d", &num1);
	
	printf("\nIngrese el segundo numero: ");
	scanf("%d", &num2);
	
	printf("\nIngrese el tercer numero: ");
	scanf("%d", &num3);
	
	retorno = numeromayor(num1, num2, num3);
	
	printf("\n//-----------------------------------//\n");
	printf("\nEl mayor numero es: %d\n\n", retorno);
	
	return 0;
}

int numeromayor(int num1, int num2, int num3){
	int resultado;
	
	if((num1>=num2) && (num1>=num3)){
		resultado = num1;
	}
	
	else if((num2>=num1) && (num2>=num3)){
		resultado = num2;
	}
	
	else if((num3>=num1) && (num3>=num2)){
		resultado = num3;
	}
	
	return resultado;
}
