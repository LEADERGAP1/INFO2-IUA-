#include <iostream>
using namespace std;
/*1. Escribir un programa donde se solicite el tamaño del vector (entre 5 y 10) y 
reservar memoria. Luego al finalizar la ejecucion del programa 
	liberarla. Luego crear las siguientes funciones:
	
	- cargarNumero(), que rellene aleatoriamente el vector
	con números entre el 1 y 10 utilizando punteros.
	
	- mostrarNumero(), que muestre el vector anterior por
	medio de punteros los valores del vector y las direcciones en las cuales
	los valores sean mayores a 5 inclusive.
	
	
	- sumarNumero() que sume todos los números del
	vector de manera recursiva.*/
void cargar_numeros(int *,int);
void mostrar_numeros(int *,int);
int sumar_numeros(int *,int);
int main(int argc, char *argv[]) {
	int cantidad=0,numerocorrecto=0,suma=0;
	char op=' ',cass=' ',ma=' ';
	int *p=NULL;
	printf("Ingrese cuantos datos desea cargar entre 5 y 10.\n");
	scanf("%d",&numerocorrecto);
	if(numerocorrecto<=10 && numerocorrecto>=5){
		cantidad=numerocorrecto;
	}else{
		printf("El numero ingresado no es correcto.");
		exit(0);
	}
	p=(int *)malloc(cantidad * sizeof(int));
	if(p==NULL){
		printf("No hay suficiente memora.\n");
		exit(0);
	}else{
		do{
			printf("Seleccione una opcion: \n");
			printf("A)Cargar numeros.\n");
			printf("B)Mostrar numeros cargados.\n");
			printf("C)Sumar numeros.\n");
			scanf(" %c",&cass);
			switch(cass){
			case 'a':
			case 'A':
				cargar_numeros(p,cantidad);
				break;
			case 'b':
			case 'B':
				mostrar_numeros(p,cantidad);
				break;
			case 'c':
			case 'C':
				suma=sumar_numeros(p,cantidad);
				printf("La suma total de los valores es: %d\n",suma);
				break;
			}
			printf("¿Desea continuar? S/N\n");
			scanf(" %c",&op);
		}while(op=='s');
	}
	free(p);
	return 0;
}
void cargar_numeros(int *p,int cantidad){
	int valores=0;
	printf("Ingrese los valores: \n");
	for(int i=0;i<cantidad;i++){
		scanf("%d",&valores);
		*(p+i)=valores;
	}
}
void mostrar_numeros(int *p,int cantidad){
	printf("Los valores ingresados son:\n");
	for(int i=0;i<cantidad;i++){
		printf("%d\t",*(p+i));
	}
	printf("Las direcciones de memoria de valores mayores a 5 son: \n");
	for(int i=0;i<cantidad;i++){
		if(*(p+i)>=5){
			printf("%X\t",(p+i));
		}
	}
	printf("\n");
}
int sumar_numeros(int *p,int cantidad){
	int suma=0;
	for(int i=0;i<cantidad;i++){
		suma=*(p+i)+suma;
	}
	return suma;
}
