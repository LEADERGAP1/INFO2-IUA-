 #include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;

//PROTOTIPOS DE LAS FUNCIONES 
void maximo( int *puntero);
void minimo(int *puntero);
void sumatoria(	int *puntero);

int main(int argc, char *argv[]) {
	/*13. Desarrolle un programa que declare e inicialice un vector de 5 valores aleatorios. 
	Luego, crear 3 funciones que permita hallar el valor máximo, mínimo y el sumatoria de ellos. 
	Finalmente mostrar los resultados. Utilice punteros para realizar el ejercicio. */

	//ACLARACION : SIN TEMA PUNTE PUNTERO A FUNCION 	
int vector[5]={0};
int *puntero;
puntero=vector;
srand(time(NULL));

//lenamos el vector con aleatorios 
for(int i=0;i<5;i++)
{
	*(vector+i)=rand()%99+1;
	printf("%d \t",*(puntero+i));

}	
printf("\n");

//llamada a las funciones
maximo(puntero);
minimo(puntero);
sumatoria(puntero);

	return 0;
}


//DESARROLLO DE LAS FUNCIONES 
void maximo( int *puntero)
{
	int maximo=0;
	for(int i=0;i<5;i++)
	{
		if(i==0)
		{
			maximo=*(puntero+i);
		}
		else
		{
			if(*(puntero+i)>maximo)
			{
				maximo=*(puntero+i);
			}
		}
		
	}
	printf("El maximo es %d \n",maximo);
}
void minimo(int *puntero)
{
	int minimo=0;
	for(int i=0;i<5;i++)
	{
		if(i==0)
		{
			minimo=*(puntero+i);
		}
		else
		{
			if(*(puntero+i)<minimo)
			{
				minimo=*(puntero+i);
			}
		}
		
	}
	printf("El minimo es %d \n",minimo);
}
void sumatoria(	int *puntero)
{
	int sumatoria=0;
	for(int i=0;i<5;i++)
	{
		sumatoria+=*(puntero+i);
	}
	printf("El sumatoria es %d \n",sumatoria);
}
