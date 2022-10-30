#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int var1=10;
	int *p=&var1;
	printf("IMPRIMO LA DIRECCION DE MEMORIA QUE TIENE AHORA P ES %X \n",&var1);
	p++;
	printf("IMPRIMO LA DIRECCION DE MEMORIA QUE TIENE AHORA P ES %d \n",*p); //quiero que muestre el valor de la variable  a la que apunta el puntero  
	
	
	
	return 0;
}

