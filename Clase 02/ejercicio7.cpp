#include<stdio.h>

// Cree un programa que lea una oración por STDIN
// y la convierta a mayúsculas.

int main(){
	char cadena[50];
	int i;
	
	printf("\nIngrese una frase: ");
	scanf("%[^\n]s", cadena);
	
	for(i=0; i<50; i++){
		if(cadena[i]>='a' && cadena[i]<='z'){
			cadena[i] -= 32;
		}			
	}
	
	printf("\n//-----------------------------------//\n");
	printf("\nSu frase en mayusculas es: %s.\n\n", cadena);

	return 0;
}
