#include <stdio.h>
#include "lista/lista.h"

void copiarLista(Lista origen, List &destino);
tipoDato menorLista(Lista lista);
void eliminaRepetidos(Lista &lista);

Lista unirListasOrdenadas(Lista lista1, Lista lista2); //Merge
void dividirLista(Lista lista, Lista &frente, Lista &fondo); //Sort
void MergeSort(Lista &lista); //Merge Sort

int main(){
	Lista a;
	inserta(10, 1, a);
	inserta(70, 2, a);
	inserta(21, 3, a);
	inserta(16, 4, a);
	inserta(83, 5, a);
	inserta(23, 6, a);
	
	//Lista b;
	//copiarLista(a, b);
	//imprime(b);
	
	//printf("MÍNIMO: %d\n", menorLista(b));
	
	//eliminaRepetidos(a);
	//imprime(a);
	
	MergeSort(a);
	imprime(a);
		
  return 0;
}

//Crear una función que permita copiar una lista.
void copiarLista(Lista origen, List &destino){
	for(int i=primero(origen); i<fin(origen); i=siguiente(i, origen)){
		tipoDato valor = recupera(i, origen);
		inserta(valor, i, destino);
	}
}

//Crear una función que encuentre el menor elemento de la lista.
tipoDato menorLista(Lista lista){
	for(int i=primero(lista); i<fin(lista); i=siguiente(i, lista)){
		tipoDato minimo = recupera(1, lista);
		//Buscando el menor elemento.
		tipoDato elemento = recupera(i, lista);
		if(elemento<minimo){
			minimo = elemento;
		}
	}
	return minimo;
}

//Crear una función que permita eliminar los elementos
//repetidos de una lista.
void eliminaRepetidos(Lista &lista){
	for(int i=primero(lista); i<fin(lista); i=siguiente(i, lista)){
		//Eliminar los repetidos.
		tipoDato elemento = recupera(i, lista); //Elemento a buscar.
		for(int j=siguiente(i, lista); j<fin(lista); j=siguiente(j, lista)){
			if(elemento==recupera(j, lista)){
				suprime(j, lista);
				j--; //Actualiza el largo de la lista.
			}
		}
	}
}

//Crear una función recursiva que realice un ordenamiento de los
//nodos en orden ascendente. Asume que la lista no está vacía.
Lista unirListasOrdenadas(Lista lista1, Lista lista2){
	Lista aux;
	Lista temp;
	Lista resultado;
	
	if(lista1.primero == NULL){
		return(lista2);
	} else if(lista2.primero == NULL){
		return(lista1);
	}
	
	if((lista1.primero->dato) <= (lista2.primero->dato)){
		resultado.primero = lista1.primero;
		aux.primero = lista1.primero->next;
		temp = unirListasOrdenadas(aux, lista2);
		resultado.primero->next = temp.primero;
	} else{
		resultado.primero = lista2.primero;
		aux.primero = lista2.primero->next;
		temp = unirListasOrdenadas(lista1, aux);
		resultado.primero->next = temp.primero;
	}
	return resultado;
}

void dividirLista(Lista lista, Lista &frente, Lista &fondo){
	nodo* ptr1;
	nodo* ptr2;
	ptr2 = lista.primero;
	ptr1 = lista.primero->next;
	
	while(ptr1 != NULL){
		ptr1 = ptr1->next;
		if(ptr1 != NULL){
			ptr2 = ptr2->next;
			ptr1 = ptr1->next;
		}
	}
	frente.primero = lista.primero;
	fondo.primero = ptr2->next;
	ptr2->next = NULL;
}

void MergeSort(Lista &lista){
	Lista aux1;
	Lista aux2;
	
	if((lista.primero == NULL) || (lista.primero->next == NULL)){
		return; //Corta la ejecución de una función.
	}
	
	dividirLista(lista, aux1, aux2);
	MergeSort(aux1);
	MergeSort(aux2);
	lista = unirListasOrdenadas(aux1, aux2);
}
