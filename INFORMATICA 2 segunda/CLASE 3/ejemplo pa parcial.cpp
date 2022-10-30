#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int f=5,c=3;
	int ** arreglo=(int **)malloc(sizeof(int *) * c);//columnas
	if(arreglo==NULL)
	{
		printf("no hay memoria suciciente\n");
		exit(1);
	}
	for(int i=0;i<c;i++)
	{
		*(arreglo+i)=(int *)malloc(sizeof(int) * f);//filas
	
		
		if(*(arreglo+i)==NULL)
		{
			printf("no hay memoria suciciente\n");
			exit(1);
		}
	}
	
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<f;j++)
		{
			*(*(arreglo+i)+j)=rand()%100;//cargo en i - j
		}
	}
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<f;j++)
		{
			printf("%d \t",*(*(arreglo+i)+j));//muestro i-j
		}
		printf("\n");
	}
	return 0;
}

