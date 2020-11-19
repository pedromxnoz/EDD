#include <stdio.h>

//Reciba una cadena de caracteres y la convierta a mayúsculas.

void mayusculas();

char cadena[50];

int main(){
	
	printf("Ingrese una frase: ");
	scanf("%[^\n]s", cadena);
	
	mayusculas();
	
	return 0;
}

void mayusculas(){
	
	for(int i=0; i<50; i++){
		if(cadena[i]>='a' && cadena[i]<='z'){
			cadena[i] -= 32;
		}
	}
	
	printf("\n//-----------------------------------//\n");
	printf("\nSu frase en mayusculas es: %s.\n\n", cadena);
	
}
