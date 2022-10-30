#include <iostream>
/*8. Crear un programa en la cual contenga un menú de opciones con distintas operaciones: 
	
	a. Reserva de memoria e introducción de datos enteros
	
	b. Agregar reserva de memoria e introducción de nuevos datos enteros
	
	c. Mostrar los datos en el orden y orden invertido al que fueron introducidos*/
using namespace std;

void cargar(int *,int,int);
void mostrar(int *,int,int);
void reall(int *,int, int);

int main(int argc, char *argv[]) {
	int i=0,cantidad=0,valor=0;
	char opcion=' ';
	int *p;
	
	
	printf("menu de opciones\n");
	
	do
	{
		printf("A_reservar memoria\n");
		printf("B_agregar a reserva de datos,nuevos u otros\n");
		printf("C_mostrar datos en orden\n");
		scanf(" %c",&opcion);
		switch(opcion)
		{
		case 'a':
			printf("ingrese cantidad\n");
			scanf("%d",&cantidad);
			p=(int *)malloc(sizeof(int)*cantidad);
			cargar(p,cantidad,valor);
			break;
		case 'b':
			reall(p,cantidad,valor);
			break;
		case 'c':
			mostrar(p,cantidad,valor);
			break;
		}
		printf("continuar\n, s/n");
		scanf(" %c",&opcion);
	}while(opcion=='s');
	free(p);
	return 0;
}
void cargar(int *p,int cantidad,int valor)
{
	if(p==NULL)
	{
		printf("no hay suficiente memoria\n");
		exit(1);
	}else{
	printf("ingrese valor\n");
	
	for(int i=0;i<cantidad;i++)
	{
		scanf("%d",&valor);
		*(p+i)=valor;
	}
	
	}
}
void mostrar(int *p,int cantidad,int valor)
{
	int i=0;
	for(i=0;i<cantidad;i++)
	{
		printf("valor %d con su direccion %x\n",*(p+i),(p+i));
		
	}
}
void reall(int *p,int cantidad, int valor)
{
	printf("ingrese modificacion, agregar o reducir o lo que quiera\n");
	scanf("%d",&cantidad);
	
	p=(int *)realloc(p,cantidad*sizeof(int));
	
	if(p==NULL)
	{
		printf("no hay suficiente memoria\n");
		exit(1);
	}
		for(int i=0;i<cantidad;i++)
		{
			scanf("%d",&valor);
			*(p+i)=valor;
			
		}
		for(int i=0;i<cantidad;i++)
		{
			printf("valor %d con su direccion %x\n",*(p+i),(p+i));
			
		}
}
