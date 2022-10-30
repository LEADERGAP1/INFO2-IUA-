#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n1=2432342;
	int *p;
	p=&n1;
	printf("LA DIRECCION DE MEMORIA de n1 ES %X \n",p);
	printf("EL VALOR DE LA VARIABLE  ES %d \n",n1);
	printf("EL VALOR DEL PUNTERO  %X   \n",p);
	printf("EL VALOR AL QUE APUNTA EL PUNTERO %X \n",p);
	
	
	return 0;
}

