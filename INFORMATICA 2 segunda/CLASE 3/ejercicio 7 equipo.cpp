#include <iostream>
/*7. Crear un programa que pregunte al usuario cuántos caracteres desea introducir, 
	reserve espacio para dicho número de caracteres, le permita al usuario introducirlos desde teclado y luego mostrar por pantalla los valores. 
	Luego, el programa pregunta cuántos caracteres desea agregar a la lista de elementos ya introducida, agrega espacio de memoria y solicita el ingreso de los nuevos valores. 
	Por último, mostrar la lista resultante. Utilizar funciones.*/
using namespace std;
void cargar(int *,int,int);
void mostrar(int *,int,int);
void reall(int *,int,int);
int main(int argc, char *argv[]) {
	int i=0,cantidad=0,valor=0;
	char opcion=' ';
	printf("ingrese cantidad\n");
	scanf("%d",&cantidad);
	int *p;
	p=(int *)malloc(sizeof(int)*cantidad);
	if(p==NULL)
	{
		printf("memoria insuficiente\n");
		exit(1);
	}else{
		cargar(p,cantidad,valor);
	}
	mostrar(p,cantidad,valor);
	printf("desea cambiar ?\n");
	
	scanf(" %c",&opcion);
	if(opcion=='s');
	{
		reall(p,cantidad,valor);
	}
	free(p);
	return 0;
}
void cargar(int *p,int cantidad,int valor)
{
	int i=0;
	for(i=0;i<cantidad;i++)
	{
		scanf("%d",&valor);
		*(p+i)=valor;
		
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
void reall(int *p,int cantidad,int valor)
{
	printf("ingrese modificacion, agregar o reducir o lo que quiera\n");
	scanf("%d",&cantidad);
	
	p=(int *)realloc(p,cantidad*sizeof(int));
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
