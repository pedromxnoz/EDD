#include<stdio.h>

// Pedro Munoz - 20313833418

//Lea un numero e indique si es par o no.

int main(){
	int num;
	
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	
	if((num%2 == 0) && (num!=0) &&(num!=1)){
		printf("\nEl numero %d es PAR.\n\n", num);
	}
	
	else{
		printf("\nEl numero %d es IMPAR.\n\n", num);
	}
	
	return 0;
}
