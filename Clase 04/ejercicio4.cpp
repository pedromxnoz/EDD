#include <stdio.h>

//Reciba un arreglo y retorne la suma.

int sumararreglo(int arreglo[]);

int main(){
	int num, retorno;
	int arreglo[5];
	
	printf("A continuacion tendra que digitar 5 numeros para un arreglo.\n");
	
	for(int i=0; i<5; i++){
		printf("\n(%d) Ingrese un numero: ", i+1);
		scanf("%d", &num);
		arreglo[i] = num;
	}
	
	retorno = sumararreglo(arreglo);
	
	printf("\n//-----------------------------------//\n");
	printf("\nLa suma del arreglo es: %d\n\n", retorno);
	
	return 0;
}

int sumararreglo(int arreglo[]){
	int resultado = 0;
	
	for(int j=0; j<5; j++){
		resultado += arreglo[j];
	}
	
	return resultado;
}
