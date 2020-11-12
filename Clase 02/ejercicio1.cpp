#include<stdio.h>

// Lea dos numeros y que escriba el mayor de los dos. 

int main(){
	int num1, num2;
	
	printf("\nIngrese el primer numero: ");
	scanf("%d", &num1);
	printf("\nIngrese el segundo numero: ");
	scanf("%d", &num2);
	
	if(num1>num2){
		printf("\n//-----------------------------------//\n");
		printf("\nEl numero %d es mayor que %d.\n\n", num1, num2);
	}
	
	else if(num2>num1){
		printf("\n//-----------------------------------//\n");
		printf("\nEl numero %d es mayor que %d.\n\n", num2, num1);
	}
	
	else{
		printf("\n//-----------------------------------//\n");
		printf("\nAmbos numeros son iguales.\n\n");
	}
	
	return 0;
}
