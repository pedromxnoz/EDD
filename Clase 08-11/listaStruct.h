//Estructuras
#ifndef LISTA_STRUCT_H
#define LISTA_STRUCT_H

#define tipoDato int

//Estructuras
struct nodo{
  tipoDato dato;
  struct nodo* next;
};

#define Lista nodo*

#endif