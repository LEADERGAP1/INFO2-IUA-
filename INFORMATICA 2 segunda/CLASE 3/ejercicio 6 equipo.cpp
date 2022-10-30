#include <iostream>
/*6. Crear un programa que pregunte al usuario cuántos caracteres desea introducir, reserve espacio para dicho número de caracteres, le permita al usuario introducirlos desde teclado. 
	Por último se los muestre todos seguidos y en el orden inverso al que fueron introducidos. 
	Crear funciones para cargar, mostrar en orden y mostrar en orden inverso. Utilizar funciones.*/
using namespace std;
void mostrar(int *,int);
int main(int argc, char *argv[]) {
	int i =0,cantidad=0,valores=0,invertir=0,invertir2=0;
	int *p;
	printf("ingrese cantidad\n");
	scanf("%d",&cantidad);
	p=(int*)malloc(sizeof(int)*cantidad);
	
	printf("ingrese valores\n");
	
	if(p==NULL){
		printf("no hay suficiente memoria\n");
		exit(1);
	}else{
		for(i=0;i<cantidad;i++)
		{
			scanf("%d",&valores);
			*(p+i)=valores;
			
		}
	}
	printf("los valores son\n");
	for(i=0;i<cantidad;i++)
	{
		printf("%d\t",*(p+i));
		printf("\n");
		
	}
	printf("valores ingresados\n");
	mostrar(p,cantidad);
	free(p);
	return 0;
}
void mostrar(int *p,int cantidad)
{
	int i=0;
	for(i=cantidad;i!=0;i--)
	{
		system("color 07");
		system("color 06");
		system("color 05");
		system("color 04");
		system("color 03");
		system("color 02");
		system("color 01");
		printf("valor  %d\t direccion %x\t",toupper(*(p+i-1)),(p+i));
		printf("\n");
		system("color 08");
		system("color 06");
		system("color 07");
		system("color 06");
		system("color 05");
		system("color 04");
		system("color 03");
		system("color 02");
		system("color 07");
	}
}
