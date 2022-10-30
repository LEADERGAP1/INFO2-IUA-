#include <iostream>
#include <stdio.h>
using namespace std;


int main(int argc, char *argv[]) {
	//2.  Cree un programa que permita reservar memoria para n valores decimales (float).
	//	Luego cargar los n valores, imprimirlos y liberar la memoria.
	int n=0;
	float valor=0;
	printf("INGRESE LA CANTIDAD DE ELEMENTOS para reservarles memoria..\n");
	scanf("%d",&n);
	float *t=NULL;
	//----------
	t=(float *) malloc(n*sizeof(float));//aqui debo saber la cantidad en bytes 
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
			scanf("%f",&valor);
			*(t+i)=valor;
		}
		//imprimo
		for(int i=0;i<n;i++)
		{
			printf("El valor es %.2f \t",*(t+i));
		}
		
	}
	
	//LIBERAMOS LA MEMORIA
	free(t);
	return 0;
}


