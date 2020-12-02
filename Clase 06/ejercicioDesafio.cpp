#include <stdio.h>
#include <math.h>

/*
Considere que cada punto en el plano cartesiano
puede ser visto o representado por un Vector, si
se considera la recta dirigida desde el origen al
punto.

- Cree una función que permita calcular el módulo a un vector.
- Cree una función que permita sumar dos vectores.
- Cree una función que permita calcular el producto punto
  (o escalar) entre dos vectores.

*/

struct Vector{
	float x;
	float y;
	
	Vector(){x=0; y=0;}
	Vector(int a){x=a; y=a;}
	Vector(int a, int b){x=a; y=b;}
};

float modulo(Vector v);

Vector sumaVectores(Vector v1, Vector v2);

float productoEscalar(Vector v3,Vector v4);

int main(){
    Vector a;
    a.x = 3;
    a.y = 7;

    float resultado = modulo(a);
	
	//Muestra el modulo del vector.
    printf("1. El modulo del vector es: %f\n", resultado);

    Vector b;
    b.x = 3;
    b.y = 9;
    
    Vector c;
    c.x = 5;
    c.y = -2;
    
    //Muestra la suma de los vectores.
    printf("\n2. La suma de los vectores es: (%.0f,%.0f)\n", sumaVectores(b,c).x, sumaVectores(b,c).y);

    Vector d;
    d.x = 2;
    d.y = 4;
    
    Vector e;
    e.x = 6;
    e.y = 1;
    
    //Muestra el producto escalar entre los vectores.
    printf("\n3. El producto escalar entre los vectores es: %.1f\n\n", productoEscalar(d,e));

    return 0;
    }

float modulo(Vector v1){
	
    return sqrt(pow(v1.x,2) + pow(v1.y,2));
}

Vector sumaVectores(Vector v1, Vector v2){
	Vector res;
	
	res.x = v1.x+v2.x;
	res.y = v1.y+v2.y;
	
	return res;
}

float productoEscalar(Vector v3, Vector v4){
	
	return ((v3.x*v4.x)+(v3.y*v4.y));
}
