#include<stdio.h>

// Lea números enteros indefinidamente hasta que llegue el 
// numero cero y luego escriba la suma de todos ellos.

int main(){
	int num;
	int suma = 0;
	
	while(num!=0){
		printf("\nIngrese un numero: ");
		scanf("%d", &num);
		
		suma = suma + num;
	}
	
	printf("\n//-----------------------------------//\n");
	printf("\nLa suma de todos los numeros es: %d", suma);
	printf("\n\n");
	
	return 0;
}
