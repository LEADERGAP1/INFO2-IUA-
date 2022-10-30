#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int nota1=0;
	int nota2=0;
	int nota3=0;
	float promedio=0;
	printf("INGRESE SUS TRES NOTAS \n");
	scanf("%d",&nota1);
	scanf("%d",&nota2);
	scanf("%d",&nota3);
	promedio=(float)(nota1+nota2+nota3)/3;
	printf("EL PROMEDIO ES %.2f \n",promedio);
	return 0;
}

