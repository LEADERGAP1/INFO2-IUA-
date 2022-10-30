#include <iostream>
#include <stdio.h>
using namespace std;

void mayusculas(char *ptr);
void minusculas(char *ptr);



int main(int argc, char *argv[]) {
	//9.  Desarrollar el ejercicio anterior con funciones. Crear una funcion que pase los valores a mayusculas y una funcion que pase los valores a minusculas. Desarrollar un programa que declare e 
	//inicialice un vector tipo char con el abecedario. Luego mostrar en pantalla el abecedario en mayuscula y minuscula,  utilizando punteros. 
	//Nota: la funcion para pasar a mayuscula es toupper() y a minusculas es tolower(). Ejemplo: cadena[i] = tolower(cadena[i]); En codigo ASCII A=65
char a[27]={' '};
char *ptr;
ptr=a;
for(int i=0;i<26;i++)
{
	a[i]=65+i;
}
mayusculas(ptr);
minusculas(ptr);


	return 0;
}


void mayusculas(char *p)
{
	for(int i=0;i<26;i++)
	{
		printf(" %c",toupper(*p+i));
	}
}



void minusculas(char *p)
{
	printf("\n");
	for(int i=0;i<26;i++)
	{
		printf(" %c",tolower(*p+i));
		
	}
}
