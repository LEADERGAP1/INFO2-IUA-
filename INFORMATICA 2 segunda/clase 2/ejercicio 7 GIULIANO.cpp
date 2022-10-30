#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	//7. Desarrolle un programa que declare e inicialice un vector de 5 valores (4.5,8,2.3,1.1,3). Luego, se pide que calcule y muestre la sumatoria y el promedio. Utilice punteros para realizar el ejercicio.
	
	//declaracion de variables escalares y le asignamos un puntero 
	float sumatoria=0,promedio=0;
	int i=0;
	float *p1,*p2;
	p1=&sumatoria;
	p2=&promedio;
	
	
	//declaramos el arreglo y le asignamos un puntero 
	float arreglo[5]={4.5,8,2.3,1.1,3};
	float *punteroarreglo;
	punteroarreglo=arreglo;              //linea 19 y 20 son equivalentes
	punteroarreglo=&arreglo[0];          //ya que el nombre del arreglo es un puntero al primer elemento del mismo 

	for (i=0;i<5;i++)
	{
		*p1+=*(punteroarreglo++);//recordar que esto indica cuanto lugar ira cambiando en base al valor de i       //TEMA ARITMETICA DE PUNTEROS : va cambiando con el ++ la direccion de memoria de cada elemento del arreglo ,para ir viendo el valor que hay en cada uno de ellos.. 
	}                                   //recordar que el puntero de un arreglo tiene la direccion de memoria de todos los elementos del arreglo no solo una direccion ..sino un grupo de direcciones 
										//es lo mismo ++ que i+
	*p2=*p1/5;
	printf("EL PROMEDIO ES  %.2f  y la sumatoria es %.2f \n",*p2,*p1);
	
	
	return 0;
}

