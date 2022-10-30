#include <iostream>
#include <stdio.h>
using namespace std;


int main(int argc, char *argv[]) {
	//3. Cree un programa que permita reservar memoria para n caracteres (char). 
	//	Luego cargar los n caracteres, imprimirlos y liberar la memoria.
		
	int n=0;
	char valor=' ';
	printf("INGRESE LA CANTIDAD DE ELEMENTOS para reservarles memoria..\n");
	scanf("%d",&n);
	char *t=NULL;
	//----------
	t=(char *) malloc(n*sizeof(char));//aqui debo saber la cantidad en bytes 
	if(t==NULL)                   //SE GUARDA LA MEMORIA PARA TODOS LOS PUNTEROS DE LA CANTIDAD DE ELEMENTOS
	{ 								//CONOCIENDO EL PUNTERO t ,CON ARITMETICA DE PUNTEROS PODEMOS ACCEDER A LOS DEMAS COMO SIEMPRE..
		printf("no hay memoria disponible \n");      //ademas cuando se guardan las memorias requeridas , estas se guardan una siguiente de la otra..y asi.. 
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
			scanf(" %c",&valor);
			*(t+i)=valor;
		}
		//imprimo
		for(int i=0;i<n;i++)
		{
			printf("El valor es %c \t",*(t+i));
		}
		
	}
	
	//LIBERAMOS LA MEMORIA
	free(t);
	return 0;
}

