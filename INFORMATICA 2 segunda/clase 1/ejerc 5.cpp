#include <stdio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]) {
	/*5. Escribir un programa que solicite dos numeros y luego una de las operaciones del menu de opciones: 
		
		a. sumar
		b. restar
		c. multiplicar
		d. dividir dos numeros
		e. elevar a una potencia
		f. calcular la raiz de numero
		
		Luego mostrar el resultado y preguntar si desea realizar otra operacion o terminar el programa. Utilizar punteros para el calculo de las operaciones. Libreria: #include <math.h>
	return 0; */
	
	//VAMOS A PRACTICAR TRBAJO CON PUNTEROS EN EL MAIN Y TAMBIEN EN FUNCIONES ...
	
int num1=0,num2=0,suma=0,resta=0,multiplicacion=0,division=0,potencia=0,raiz=0;
char opcion=' ';

//DECLARO LAS VARIABLES DE TIPO PUNTERO NECESARIAS..
int *N1,*N2;
N1=&num1,N2=&num2;




//------------------------------
printf("Ingrese 2 numeros \n");
scanf("%d %d",&num1,&num2);
do{
	printf("Menu de opciones \n");
	printf("a. sumar \n");
	printf("b. restar \n");
	printf("c. multiplicar \n");
	printf("d. dividir dos numeros \n");
	printf("e. elevar a una potencia  \n");
	printf("f. calcular la raiz de numero  \n");
	
	printf("Ingrese LA OPCION \n");
	scanf(" %c",&opcion);
	switch(opcion)
	{
	case 'a':
		suma=*N1+*N2;
		printf("La suma es %d \n",suma);
		break;
	case 'b':
		resta=*N1-*N2;
		printf("La resta es %d \n",resta);
		break;
	case 'c':
		multiplicacion=(*N1)*(*N2);
		printf("La multiplicacion es %d \n",multiplicacion);
		break;
	case 'd':
		division=(*N1)/(*N2);
		printf("La division es %d \n",division);
		break;
	case 'e':
		potencia=pow(*N1,*N2);
		printf("La potencia es %d \n",potencia);	
		break;
	case 'f':
		raiz=sqrt(*N1);
		printf("La raiz es %d \n",raiz);
		break; 
	}
	printf("DESEA CONTNUAR CON OTRA OPERACION   s  \n");
	scanf(" %c",&opcion);
	

}while(opcion == 's');
	

return 0;

}

