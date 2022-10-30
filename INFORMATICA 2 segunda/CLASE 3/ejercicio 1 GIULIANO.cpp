#include <iostream>
#include <stdio.h>
using namespace std;


int main(int argc, char *argv[]) {
	//1. Cree un programa que permita reservar memoria para n valores enteros. 
	//Luego cargar los n valores, imprimirlos y liberar la memoria.
	int n=0,valor=0;
	printf("INGRESE LA CANTIDAD DE ELEMENTOS para reservarles memoria..\n");
	scanf("%d",&n);
	int *t=NULL;
	
	t=(int *) malloc(n*size(int));//aqui debo saber la cantidad en bytes 
	if(t==NULL)
	{
		printf("no hay memoria disponible \n");
		exit(1);
	}
	
	//-----------
	//cargamos e imprimimos LOS PUNTEROS
	else
	{
		//cargo
		for(int i=0;i<n;i++)
		{
			printf("Ingrese valor por valor..\n");
			scanf("%d",&valor);
			*(t+i)=valor;
		}
		//imprimo
		for(int i=0;i<n;i++)
		{
			printf("El valor es %d \t",*(t+i));
		}
		
	}
	
	//LIBERAMOS LA MEMORIA
	free(t);
	return 0;
}

