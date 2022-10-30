#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
/*1. Desarrolle un programa que guarde 20 elementos de valores enteros aleatorios (entre 1 y 50) en un puntero. Luego un menu de opciones con las siguientes funciones:
	a. Mostrar todos los valores con su respectiva dirección.
	b. Mostrar los valores pares.
	c. Sumar los valores impares.
	d. Contar las cantidad de valores que están entre 10 y 15.
	Nota: utilice punteros y funciones para realizar este ejericio.
	
	2. Desarrolle un programa que permita reservar espacio para 10 caracteres, los llene con 10 valores aleatorios y los muestre. Luego, el programa solicita al usuario que ingrese cuántos caracteres desea agregar a la lista de elementos ya generada. El programa agrega espacio de memoria y solicita el ingreso de los nuevos valores por teclado. Por último, mostrar la lista resultante.
	
	Los nombres de los archivos deben seguir la siguiente nomenclatura: apellido_nombre_1.cpp y apellido_nombre_2.cpp
	
	Los nombres de archivos no deben contener acentos, ñ, etc. Escribir todo en minuscula separado en guión bajo*/

//prototipos de las funciones
void mostrardirecciones(int *);
void valorespares(int *);
void sumadeimpares(int *);
void contador(int *);
	
int main(int argc, char *argv[]) {
	int i=0;
	int vector[20]={0};
	srand(time(NULL));
	int *ptr_vector=NULL;
	ptr_vector=vector;
	
	//carga aleatoria del vector 
	for(i=0;i<20;i++)
	{
		*(vector+i)=rand()%49+1;
	}
	mostrardirecciones(ptr_vector);
	printf("\n");
	valorespares(ptr_vector);
	printf("\n");
	sumadeimpares(ptr_vector);
	printf("\n");
	contador(ptr_vector);
	return 0;
}


//desarrollo de las funciones 
void mostrardirecciones(int *ptr_vector)
{
	int i=0;
	for(i=0;i<20;i++)
	{	
		printf("los valores son %d \t Y Las direcciones de memoria son %x \n",*(ptr_vector+i),*ptr_vector+i);
	}
}
void valorespares(int *ptr_vector)
{
	int i=0 , numero=0;
	for(i=0;i<20;i++)
	{
		numero=*(ptr_vector+i);
		if(numero%2==0)
		{
			printf("ESTE NUMERO ES PAR %d \n",numero);
		}
	}
}
void sumadeimpares(int *ptr_vector)
{
	int i=0,numero=0,suma=0;
	for(i=0;i<20;i++)
	{
		numero=*(ptr_vector+i);
		if(numero%2!=0)
		{
			suma+=numero;
		}
	}
	printf("LA SUMA DE IMPARES ES %d \n",suma);
}
void contador(int *ptr_vector)
{
	int i=0 , numero=0,contador=0;
	for(i=0;i<20;i++)
	{
		numero=*(ptr_vector+i);
		if(numero>10 && numero<15)
		{
			contador+=1;
		}
	}
	printf("La cantidad de numeros entre 10 y 15 son %d \n",contador);
}
