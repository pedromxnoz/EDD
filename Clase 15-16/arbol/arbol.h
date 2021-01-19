#include "./lista/lista.h"

Arbol creaRaiz(datoArbol u);
Arbol& listaHijos(Arbol n);
void insertaHijoMasIzq(Arbol &n, Arbol &Ti);
void insertaHermanoDer(Arbol &n, Arbol &Td);
Arbol raiz(Arbol raiz);
Arbol hijoMasIzq(Arbol n);
Arbol hermanoDer(Arbol n);
datoArbol etiqueta(Arbol n);
bool esHoja(Arbol n);
bool esNulo(Arbol n);
bool esHijo(Arbol n, Arbol padre);

//Clase Jueves 14-01
Arbol padre(Arbol n, Arbol raiz);
void reEtiqueta(datoArbol e, Arbol& n, Arbol raiz);
void anula(Arbol& raiz);
Arbol podarHijoMasIzq(Arbol n);
Arbol podarHermanoDer(Arbol n);
void ordenPrevio(Arbol n);
void ordenPosterior(Arbol n);

//Tarea
void ordenSimetrico(Arbol n);
