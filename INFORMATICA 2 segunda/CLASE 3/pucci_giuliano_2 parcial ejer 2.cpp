#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
/*2. Desarrolle un programa que permita reservar espacio para 10 caracteres, los llene con 10 valores aleatorios y los muestre. 
Luego, el programa solicita al usuario que ingrese cuántos caracteres desea agregar a la lista de elementos ya generada. 
El programa agrega espacio de memoria y solicita el ingreso de los nuevos valores por teclado. 
Por último, mostrar la lista resultante.*/

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int cantidad=0,i=0,nuevo_valor=0;
	int *p=NULL;
	p=(int *)malloc(10*sizeof(int));
	if(p==NULL)
	{
		printf("no hay memoria disponible \n");
		exit(1);
	}
	else
	{
		for(i=0;i<10;i++)
		{
			*(p+i)=rand()%25+25; //aleatorios de 25 a 50
			printf("VALOR POR VALOR %d \n",*(p+i));
		}
	}
	
	//------------------
	printf("Ingrese cuaantos numeros desea agregar \n");
	scanf("%d",&cantidad);
	p=(int *)realloc(p,cantidad*sizeof(int));
	
	if(p==NULL)
	{
		printf("no hay memoria disponible \n");
		exit(1);
	}
	else
	{
		for(i=0;i<cantidad;i++)
		{
			printf("INGRESE VALOR POR VALOR \n");
			scanf("%d",&nuevo_valor);
			*((p+10)+i)=nuevo_valor;
		}
		
		for(i=0;i<10+cantidad;i++)
		{
			printf("VALOR POR VALOR %d \n",*(p+i));
		}
	
	
	
	}
	
	free(p);
	return 0;
}

