#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	/*12. Se desea cargar en un vector los saldos de proveedores. La cantidad de saldos es ingresada por el usuario (maximo 10).
	La carga finaliza con un saldo menor o igual a cero. Además, desarrolle las siguientes funciones para mostrar:
	
	a. Cantidad de saldos cargados.
	
	b. Promedio de saldos.
	
	c. Cantidad de saldos menores al promedio.
	
	d. Cantidad de saldos mayores al promedio.
	
	e. Calcular cuánto fue lo recaudado en el mes.
	
	Cada ítem es una función. Para recorrer el vector utilice punteros. */
	//---------------------------
	
	//prototipos de las funciones
	void cantidad_saldos_cargados (int *p_cant);
	void promedio_desaldos(int *p_cant,int *puntero);
	void cantidad_saldos_menoresalprom(int *puntero);
	void cantidad_saldos_mayoresalprom(int *puntero);
	void recaudacion_delmes	(int *puntero);
	//-------------
	//declaracion de escalares,punteros,vectores,bandera,etc
	int saldo=0,i=0,cantidad=0;
	bool bandera=true;
	
	
	int vector[10]={0};  //corchete vacio significa que tiene lugar para un solo elemento ..
	int *puntero;
	puntero=vector;
	int *p_cant=&cantidad;
	
	//--------
	//carga del vector 
	do
	{
		printf("Ingrese los saldos porfavor \n");
		scanf("%d", puntero+i);           //cuando trabajamos con un puntero de un escalar ,es scanf("%d",puntero); porque el puntero ya es una direccion de memoria..
		if(*(puntero+i)>0)         //esto es un ARREGLO RECORRIDO CON ARITMETICA DE PUNTEROS.. ,EN ESTOS CASOS ES scanf("%d",puntero+i)//aqui  vemos puntero de vector y puntero de un escalar 
		{
			*(p_cant)+=1;	//es lo mismo con o sin parentesis?                  
			i+=1;
		}
		else
		{
			bandera=false;
		}
	}while(bandera==true && *p_cant<10);
	//-----------------
/*	//llamada a las funciones
	 cantidad_saldos_cargados (p_cant);
	 promedio_desaldos(puntero,p_cant);
	 cantidad_saldos_menoresalprom(puntero);
	 cantidad_saldos_mayoresalprom(puntero);
	 recaudacion_delmes	(puntero);
*/	
	
	
	return 0;
}
/*
//desarrollo de las funciones 
void cantidad_saldos_cargados (int *p_cant)
{
	printf("La cantidad de saldos cargados es %d \n",*p_cant);
}
void promedio_desaldos(int *p_cant,int *puntero)
{
	
}
void cantidad_saldos_menoresalprom(int *puntero)
{
	
}
void  cantidad_saldos_mayoresalprom(int *puntero)
{
	
}
void  recaudacion_delmes	(int *puntero)
{
	
}
*/
