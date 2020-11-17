#include<stdio.h>

/*
 * Cree un programa que le solicite al usuario dos
 * números enteros, los sume y muestre el resultado por
 * pantalla. Utilice únicamente memoria dinámica para
 * las variables. Recuerde que debe liberar la memoria
 * luego de mostrar el resultado. 
*/
 
int main(){
	int* num1 = new int;
	int* num2 = new int;
	int* suma = new int;
	 
	printf("\nIngrese el primer numero: ");
	scanf("%d", num1);
	
	printf("\nIngrese el segundo numero: ");
	scanf("%d", num2);
	
	*suma = *num1 + *num2;
	
	printf("\n//-----------------------------------//\n");
	printf("\nLa suma es: %d.\n\n", *suma);
	
	delete suma;
	delete num1;
	delete num2;
	
	return 0;
	 
}
