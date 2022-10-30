#include <stdio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

/*14. Desarrolle un programa que declare e inicialice un arreglo de 2x3 con valores aleatorios. 
	Luego mostrar los valores. Utilice punteros para realizar el ejercicio. */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int a[2][3]={0};
	int *p;
	p=&a[0][0];   //ó p=a;
 	
	
	
	for(int i=0;i<2;i++) 
	{
		for(int j=0;j<3;j++)
		{
			*(*(a+i)+j)=1+rand()%7;           //con i se mueve en filas y j en columnas
			printf("%d\t",*(*(a+i)+j));
		
		}
		printf("\n");
	}
	
	return 0;
}

