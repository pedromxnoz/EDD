#include "arbol.h"
#include <stdio.h>

Arbol creaRaiz(datoArbol u){
	Arbol r;
	nodoArbol n;
	n.dato = u;
	inserta(n, primero(r), r);
	return r;
}

Arbol& listaHijos(Arbol n){
	return n.primero->dato.hijos;	
}

void insertaHijoMasIzq(Arbol &n, Arbol &Ti){
	Arbol& hijos = listaHijos(n);
	tipoDato raizTi = recupera(primero(Ti), Ti);
	inserta(raizTi, primero(hijos), hijos);
	anula((Lista&)Ti);
}

void insertaHermanoDer(Arbol &n, Arbol &Td){
	tipoDato raizTd = recupera(primero(Td), Td);
	inserta(raizTd, siguiente(primero(n), n), n);
	anula((Lista&)Td);
}

Arbol raiz(Arbol raiz){
	return raiz;
}

Arbol hijoMasIzq(Arbol n){
	tipoDato x = recupera(primero(n), n);
	return x.hijos;
}

Arbol hermanoDer(Arbol n){
	Arbol r; //Crear un Arbol (que a su vez es una Lista)
	r.primero = n.primero->next;
	return r;
}

datoArbol etiqueta(Arbol n){
	tipoDato x = recupera(primero(n), n);
	datoArbol dato = x.dato;
	return dato;
}

bool esHoja(Arbol n){
	tipoDato x = recupera(primero(n), n);
	return vacia(x.hijos);
}

bool esNulo(Arbol n){
	return vacia(n);
}

bool esHijo(Arbol n, Arbol padre){
	tipoDato nodoPadre = recupera(primero(padre), padre);
	tipoDato nodoAux = recupera(primero(n), n);
	int p = localiza(nodoAux, nodoPadre.hijos);
	if(p<fin(nodoPadre.hijos)){
		return true;
	} else{
		return false;
	}
}

//Clase Jueves 14-01
Arbol padre(Arbol n, Arbol raiz){
	bool ok = esHijo(n, raiz);
	if(ok){
		return raiz;
	} else{
		Arbol aux;
		for(Arbol c = hijoMasIzq(raiz); !esNulo(c); c = hermanoDer(c)){
			aux = padre(n, c);
			if(!esNulo(aux)){
				return aux;
			}
		}
		return aux;
	}
}

void reEtiqueta(datoArbol e, Arbol& n, Arbol raiz){
	Arbol p = padre(n, raiz);
	tipoDato nodoAux = recupera(primero(n), n);
	if(!esNulo(p)){
		Arbol& hijos = listaHijos(p);
		int pos = localiza(nodoAux, hijos);
		nodoAux.dato = e;
		suprime(pos, hijos);
		inserta(nodoAux, pos, hijos);
	} else{
		nodoAux.dato = e;
		suprime(primero(n), n);
		inserta(nodoAux, primero(n), n);
	}
}

void anula(Arbol& raiz){
	if(!esNulo(raiz)){
		Arbol c = hijoMasIzq(raiz);
		while(!esNulo(c)){
			Arbol aux = hermanoDer(c);
			anula(c);
			c = aux;
		}
		suprime(primero(raiz), raiz);
	}
}

Arbol podarHijoMasIzq(Arbol n){
	Arbol hijo = hijoMasIzq(n);
	tipoDato datoHijo = recupera(primero(hijo), hijo);
	Arbol& hijos = listaHijos(n);
	suprime(primero(hijos), hijos);
	Arbol r;
	inserta(datoHijo, primero(r), r);
	return r;
}

Arbol podarHermanoDer(Arbol n){
	Arbol hermano = hermanoDer(n);
	int pos = siguiente(primero(n), n);
	tipoDato datoHermano = recupera(primero(hermano), hermano);
	suprime(pos, n);
	Arbol r;
	inserta(datoHermano, primero(r), r);
	return r;
}

void ordenPrevio(Arbol n){
	datoArbol dato = etiqueta(n);
	printf("%d - ", dato);
	for(Arbol c = hijoMasIzq(n); !vacia(n); c = hermanoDer(c)){
		ordenPrevio(c);
	}
}

void ordenPosterior(Arbol n){
	for(Arbol c = hijoMasIzq(n); !vacia(n); c = hermanoDer(c)){
		ordenPosterior(c);
	}
	datoArbol dato = etiqueta(n);
	printf("%d - ", dato);
}


//Tarea
void ordenSimetrico(Arbol n){
	if(esHoja(n)){
		datoArbol dato = etiqueta(n);
		printf("%d - ", dato);
	} else{
		ordenSimetrico(hijoMasIzq(n));
		datoArbol dato = etiqueta(n);
		printf("%d - ", dato);
		
		for(c = hermanoDer(hijoMasIzq(n)); !vacia(n); c = hermanoDer(c)){
			ordenSimetrico(c);
		}
	}
}
