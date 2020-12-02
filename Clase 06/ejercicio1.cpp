#include <stdio.h>
#include <math.h>

/*
Considere la siguiente estructura:

	struct Punto{
		float x;
		float y;
	};

Desarrolle una función en C/C++ que calcule la
distancia entre dos puntos en un plano
cartesiano.
*/

struct Punto{
	float x;
	float y;
};

float distancia(Punto p1, Punto p2);

int main(){
	Punto a, b;
    a.x = 7;
    a.y = 3;
    b.x = 3;
    b.y = 1;

    float resultado = distancia(a, b);
    
    printf("La distancia entre los puntos es: %f\n\n", resultado);

    return 0;
}

float distancia(Punto p1, Punto p2){
	
    return sqrt(pow(p1.x-p2.x, 2) + pow(p1.y-p2.y, 2));
}
