#include <stdio.h>
#include <math.h>

/*
Considere la siguiente estructura:

	struct Recta{		struct Punto{
		float m;			float x;
		float b;			float y;
	};					};

Cree una función que permita verificar si un
punto P,pertenece a la recta R.
*/

struct Recta{
	float m;
	float b;
};

struct Punto{
	float x;
	float y;
};

bool perteneceRecta(Recta r, Punto p);

int main(){
	Punto a;
	a.x = 3;
	a.y = 25;
	
	Recta b;
	b.m = 7;
	b.b = 4;
	
	if(perteneceRecta(b, a)){
		printf("El punto si pertenece a la recta.\n\n");
	}
	
	else{
		printf("El punto NO pertenece a la recta.\n\n");
	}
			
	return 0;
}

bool perteneceRecta(Recta r, Punto p){
	
	return (p.y == r.m*p.x + r.b);
}
