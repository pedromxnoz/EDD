#include <stdio.h>

/*	Crear un programa que lea un archivo “data.dat”, el cual
	contiene la siguiente información:
	2 1 5 7 23 865 21 675 6 3 1 23 76 98 45 23 7 11 13
	
	El programa debe escribir en un nuevo archivo "numeros.txt"
	el tipo de número que es, es decir, par o impar y
	primo o no primo.
	
	Par - Primo
	Impar - Primo
	Impar - Primo
*/

int main(){
	FILE* archivoleer = fopen("data.dat","r");
	FILE* archivonum = fopen("numeros.txt", "w");
	
	int num;
	
	fprintf(archivonum, "El siguiente documento presentara los numeros de data.dat\nviendo si son numeros pares/impares y primo/no primo.\n");
	fprintf(archivonum, "\n//-----------------------------------//\n");
	
	while(!feof(archivoleer)){
		fscanf(archivoleer,"%d ", &num);
		printf("%d\n", num);
		fprintf(archivonum, "\nEl numero %d es: ", num);
	
		if(num%2 == 0){
			fprintf(archivonum, "Par");
			fprintf(archivonum, " - ");
		}
		
		else {
			fprintf(archivonum, "Impar");
			fprintf(archivonum, " - ");
		}
	
		if(num==1 || num==2){
			fprintf(archivonum,"Primo\n");
		}
		
		else{
			for(int i=num-1; i>1; i--){
				if(num%i == 0){
					fprintf(archivonum,"No Primo\n");
					break;
				}
			
				if(i==2){
					fprintf(archivonum,"Primo\n");
					break;
				}	
			}
		}		
	}
	fclose(archivoleer);
	fclose(archivonum);
	
	return 0;
}
