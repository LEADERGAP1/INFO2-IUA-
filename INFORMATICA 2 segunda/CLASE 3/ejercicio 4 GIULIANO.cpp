#include <iostream>
#include <stdio.h>
using namespace std;


int main(int argc, char *argv[]) {
	/*4. Cree un programa que permita reservar memoria para n caracteres (char). 
		Luego cargar los n caracteres e imprimirlos por pantalla. El usuario desea agregar mas caracteres,
		por lo que ingresa la n cantidad de caracteres a agregar.
		Luego cargar los n caracteres, imprimirlos y finalmente liberar la memoria.*/
	
	int n=0,y=0;
	char valor=' ',rta=' ';
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
	
	//------------------------
	//EL USUARIO QUIERE AGREGAR MAS ELEMENTOS ,ENTONCES DEBERE ASIGNARLES MEMORIA A ESTOS ELEMENTOS AGREGADOS..
	//ESTO LO HAGO CAMBIANDO EL TAMAÑO DE LA MEMORIA ASIGNADO PREVIAMENTE CON LA FUNCION realloc() 
	printf("desea agregar mas caracteres? \n");
	scanf(" %c",&rta);
	if (rta=='s')
	{
		printf("ingrese la cantidad de valores TOTAL Y NUEVA DE LOS CUALES SE ASIGNARAN NUEVAMENTE LA MEMORIA DE TODOS..  \n");
		scanf("%d",&y);
		t=(char*) realloc(t,y * sizeof(char));
		
		if(t==NULL)                  
		{ 								
			printf("no hay memoria disponible \n");      
			exit(1);
		}
		else
		{
			//cargue e imprima los nuevos datos..
		
			for(int i=0;i<y;i++)
			{
				printf("Ingrese valor por valor..\n");
				scanf(" %c",&valor);
				*(t+i)=valor;
			}
			//imprimo
			for(int i=0;i<y;i++)
			{
				printf("El valor es %c \t",*(t+i));
			}
		
		}
	}	
	
	//LIBERAMOS LA MEMORIA
	free(t);
	
	return 0;
}
