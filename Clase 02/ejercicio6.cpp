#include<stdio.h>

// Indique si un numero es primo o no.

int main(){
	int num, i;
	int cont = 0;
	
	printf("\nIngrese un numero: ");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++){
		if(num%i == 0){
			cont++;
		}
	}
	
	if(cont==2){
		printf("\n//-----------------------------------//\n");
		printf("\nEl numero %d es PRIMO.\n\n", num);
	}
	
	else{
		printf("\n//-----------------------------------//\n");
		printf("\nEl numero %d NO es PRIMO.\n\n", num);
	}
	
	return 0;
}
