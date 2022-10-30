#include <iostream>
#include <stdio.h>
using namespace std;

//PROTOTIPOS DE LAS FUNCIONES 
//ACLARACION:CON LA FORMA QUE ELEGIMOS ,TRABAJAREMOS CON FUNCIONES QUE RECIBIRAN EL PUNTERO DEL ARREGLO Y NO DEVOLVERAN NADA ,
//PORQUE LOS ARREGLOS SE ACTUALIZAN SOLOS.. 

void VALORES_EN_INPARES(int *puntero);
void VALORES_EN_PARES(int *puntero);

int main(int argc, char *argv[]) {
	/* 10. Se tiene un vector de 10 elementos con valores numéricos enteros . 
		Luego crear una funcion que muestre los valores que están en posiciones impares, 
		y otra funcion con las posiciones pares.TRABAJAR CON PUNTEROS	*/

//CREAMOS EL ARREGLO 	
int arreglo[10]={10,3,5,6,3,22,44,3,2,1};
int *puntero;
puntero=arreglo;

VALORES_EN_INPARES(puntero);   //LLAMADA A LAS FUNCIONES 
printf("\n");
VALORES_EN_PARES(puntero);


	
	return 0;
}

//DESARROLLO DE LAS FUNCIONES 
void VALORES_EN_PARES(int *puntero)
{
	for(int i=0;i<10;i++)
	{
		if(i%2==0)
		{
			printf("%d \t ",*(puntero+i));
		}
		
	}
}


void VALORES_EN_INPARES(int *puntero)
{
	for(int i=0;i<10;i++)
	{
		if(i%2!=0)
		{
			printf("%d \t ",*(puntero+i));
		}
		
	}
}
