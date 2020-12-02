#include <stdio.h>
#include <math.h>

// Cree una función que permita calcular el punto
// de intersección entre dos rectas.

struct Recta{
	float m;
	float b;
};

struct Punto{
	int x;
	int y;
};

Punto pertenece(Recta r1, Recta r2);

int main(){
	Recta a;
	a.m = 3;
	a.b = -3;
	
	Recta b;
	b.m = -1;
	b.b = 1;
	
	if(a.m != b.m){
		printf("El punto de interseccion entre las 2 rectas es: (%d,%d)\n\n", pertenece(a,b).x, pertenece(a,b).y);
	}
	
	else{
		printf("NO hay punto de interseccion entre las 2 rectas.\n\n");
	}
	
	return 0;
}

Punto pertenece(Recta r1, Recta r2){
	Punto p;
	
	p.x = (r2.b-r1.b)/(r1.m-r2.m);
	p.y = (r1.m*p.x)+(r1.b);
	
	return p;
}
