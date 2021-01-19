#include <stdio.h>
#include "lista.h"

void eliminaPares(Lista &lista);
int max(Lista* lista);

void copiarLista(Lista src, Lista &dest);
int min(Lista lista);
void eliminaRepetidos(Lista &lista);


int main(){

	Lista lista;
	inserta(1,1,lista);
	inserta(2,2,lista);
	inserta(10,3,lista);
	inserta(3,4,lista);
	inserta(2,5,lista);
	inserta(-23,6,lista);
	inserta(-23,7,lista);
	inserta(-23,8,lista);
	inserta(-23,9,lista);
	imprime(lista);

	eliminaRepetidos(lista);
	imprime(lista);

	return 0;
}

void eliminaPares(Lista &lista){
	for(int i=primero(lista);i<fin(lista);i=siguiente(i,lista))
		if(recupera(i,lista)%2==0){
			suprime(i,lista);
			i=anterior(i,lista);
		}
}

int max(Lista* lista){
	tipoDato max = 0;
	for(int i = primero(*lista) ; i<fin(*lista) ; i=siguiente(i,*lista)){
		tipoDato valor_posicion = recupera(i,*lista);
		if(valor_posicion > max){
			max = valor_posicion;
			}
		}
	return max;	
	}

void copiarLista(Lista src, Lista &dest){
	for(int i = primero(src) ; i < fin(src) ; i = siguiente(i,src)){
		tipoDato valor = recupera(i,src);
		inserta(valor,i,dest);
	}
}

int min(Lista lista){
	tipoDato minimo = recupera(1,lista);
	for(int i = primero(lista) ; i < fin(lista); i = siguiente(i,lista)){
		tipoDato elemento = recupera(i,lista);
		if(elemento < minimo){
			minimo = elemento;
		}
	}
	return minimo;
}

void eliminaRepetidos(Lista &lista){
	for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i,lista)){
		tipoDato elemento = recupera(i,lista);
		for(int j = siguiente(i,lista) ; j < fin(lista) ; j = siguiente(j,lista)){
			if(elemento == recupera(j,lista)){
				suprime(j,lista);
				j--;
			}
		}
	}
}

