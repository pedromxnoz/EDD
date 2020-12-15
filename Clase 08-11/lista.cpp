//Incluir el .h
#include "lista.h"
#include <stdio.h>

//Implementaciones
bool vacia(Lista lista){
  return lista == NULL;
}

int primero(Lista lista){
  return 1;
}

int fin(Lista lista){
  if(vacia(lista)){
    return primero(lista);
  } else{
    return 1 + fin(lista->next);
  }
}

//Clase 10/12
int anterior(int p, Lista lista){
  if(p>fin(lista) || p<=primero(lista)){
    printf("ERROR en funcion ANTERIOR: La posicion no existe.\n");
    return 0;
  } else{
      return p-1;
  }
}

int siguiente(int p, Lista lista){
  if(p>=fin(lista) || p<primero(lista)){
    printf("ERROR en funcion SIGUIENTE: La posicion no existe.\n");
    return 0;
  } else{
      return p+1;
  }
}

void inserta(tipoDato x, int p, Lista &lista){
  if(p>fin(lista) || p<primero(lista)){
    printf("ERROR en funcion INSERTA: La posicion %d no existe.\n", p);
    return;
  } 
  Lista aux = lista;
  nodo* n = new nodo;
  n->dato = x;

  if(p==primero(lista)){
    lista = n;
    lista->next = aux;
  } else{
      for(int i=0; i<p-2; i++){
        aux = aux->next;
      }
      n->next = aux->next;
      aux->next = n;
  }
}

tipoDato recupera (int p, Lista lista){
  for(int i=1; i<p; i++){
    lista = lista->next;
  }
  return lista->dato;
}

void imprimeLista(Lista lista){
  for(int i=primero(lista); i<fin(lista); i=siguiente(i, lista)){
    tipoDato dato = recupera(i, lista);
    printf("%d\n", dato);
  }

}

int localiza(tipoDato x, Lista lista){
  for(int i=primero(lista); i<fin(lista); i=siguiente(i, lista)){
    tipoDato dato = recupera(i, lista);
    if(dato == x){
      return i;
    }
  }
  return fin(lista);
}

void suprime(int p, Lista &lista){
  if((p>=fin(lista)) || (p<primero(lista))){
    printf("ERROR en funcion SUPRIME: La posicion %d no existe.\n", p);
  } else{
    Lista aux = lista;
    Lista aBorrar = lista;
    if(p==primero(lista)){
      lista = aux->next;
    }else{
      for(int i=primero(lista); i<anterior(p, lista); i=siguiente(i, lista)){
        aux = aux->next;
      }
      aBorrar = aux->next;
      aux->next = aBorrar->next;
    }
    aBorrar->next = NULL;
    delete aBorrar;
  }
}

void anula(Lista &lista){
  while(!vacia(lista)){
    suprime(primero(lista), lista);
  }
}