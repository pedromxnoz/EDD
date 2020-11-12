#include<stdio.h>

// Pedro Munoz - 20313833418

//Leer tres numeros y escribir el mayor de los tres.

int main(){
	int num1, num2, num3;
	
	printf("\nIngrese el primer numero: ");
	scanf("%d", &num1);
	printf("\nIngrese el segundo numero: ");
	scanf("%d", &num2);
	printf("\nIngrese el tercer numero: ");
	scanf("%d", &num3);
	
	if((num1>=num2) && (num1>=num3)){
		printf("\n//-----------------------------------//\n");
		printf("\nEl numero %d es el mayor.\n\n", num1);
	}
	
	else if((num2>=num1) && (num2>=num3)){
		printf("\n//-----------------------------------//\n");
		printf("\nEl numero %d es el mayor.\n\n", num2);
	}
	
	else if((num3>=num1) && (num3>=num2)){
		printf("\n//-----------------------------------//\n");
		printf("\nEl numero %d es el mayor.\n\n", num3);
	}

	return 0;
}
