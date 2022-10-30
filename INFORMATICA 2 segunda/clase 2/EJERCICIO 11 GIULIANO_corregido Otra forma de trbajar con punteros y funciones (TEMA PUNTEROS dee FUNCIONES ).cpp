#include <iostream>
#include <stdio.h>
using namespace std;

void promedio(int *puntero);
   //RECORDAR EL UNICO METODO DE PASAR UN ARREGLO A UNA FUNCION ES "POR ARGUMENTO"(PUNTERO)..
								//RECORDAR HAY VARIAS FORMAS DE PASAR UN ARREGLO COMO PUNTERO A UNA FUNCION ..

int main(int argc, char *argv[]) {
	/*11. Realice un programa que permita cargar 10 números enteros en un vector. Luego utilizando
		punteros calcule el promedio de ellos. 
		Finalmente mostrar todos los valores y su promedio utilizando punteros.	*/
	
	//ACLARACION :USAREMOS LA FORMA DEL TEMA: "PUNTEROS A FUNCIONES" 
	
	
	//DECLARAMOS EL VECTOR Y SU PUNTERO
	int vector[10]={0};
	int num=0;
	int *puntero;
	puntero=vector;
	//DECLARACION Y ASIGNACION DE UN <<"PUNTERO A FUNCION" o puntero de unaa funcion>> lineas 24 y 25 
	
	void  (*PTR_a_FUNCION)(int *); // agregar *      
	PTR_a_FUNCION=promedio;         // en este caso el parametro de la funcion promedio es un puntero tambien 
	
	
	
	//cargamos el vector  
	printf("POR FAVOR INGRESE LOS 10 NUMEROS ENTEROS \n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&num);
		*(puntero+i)=num;
	}
	
	//llamada  a las funciones 
	PTR_a_FUNCION(puntero); //sacar el *
	
	
	
	return 0;
}

//DESARROLLO DE LAS FUNCIONES 
void promedio(int *puntero)
{
	float resultado=0;
	for(int i=0;i<10;i++)
	{
		resultado+=*(puntero+i); 	
	}
	resultado=resultado/10;
	printf("el resultado es %0.2f \n ",resultado); // es un float
}


