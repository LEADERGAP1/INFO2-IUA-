#include <stdio.h>
using namespace std;


//APRENDIENDO INTERCAMBIO SIN PUNTEROS 
int main(int argc, char *argv[]) {
	int a=4;
	int b=5;
	int c=3;
	c=b;
	b=a;
	a=c;
	printf ("a %d \n",a);
	printf ("b %d \n",b);
			
	return 0;
}

