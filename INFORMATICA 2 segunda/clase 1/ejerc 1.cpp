/*1. Escribir un programa que declare e inicialice una variable del tipo float n=5/2. Luego imprima el resultado de la divisi�n, la misma deber�a ser 2,5.
	
	2. Cargar las 3 notas de un alumno como valores enteros. Luego mostrar el promedio teniendo en cuenta si tiene parte decimal.
	
	3. Escribir un programa que declare una variable llamada a, un puntero del tipo de la variable creada, inicialice la variable e inicialice el puntero para que apunte a la variable creada. Luego que imprima por pantalla: la direccion de memoria de la variable, el valor que almacena la variable, el valor del puntero y el valor al que apunta el puntero.
	
	4. Escribir un programa que intercambie los valores enteros de a y b utilizando punteros.
	
	5. Escribir un programa que solicite dos numeros y luego una de las operaciones del menu de opciones: 
	
	a. sumar
	b. restar
	c. multiplicar
	d. dividir dos numeros
	e. elevar a una potencia
	f. calcular la raiz de numero
	
	Luego mostrar el resultado y preguntar si desea realizar otra operacion o terminar el programa. Utilizar punteros para el calculo de las operaciones. Libreria: #include <math.h> */


#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	//float n=5/2;
	float resultado=0;
	resultado=(float)5/2;
	printf("el resultado es %.2f \n",resultado);
	
	return 0;
}

//----------------------------
