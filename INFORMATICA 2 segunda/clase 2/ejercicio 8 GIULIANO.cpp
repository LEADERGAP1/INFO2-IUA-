#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	/*8. Desarrollar un programa que declare e inicialice un vector tipo char con el abecedario.
		Luego mostrar en pantalla el abecedario en mayuscula y minuscula, utilizando punteros. 
		Nota: la funcion para pasar a mayuscula es toupper() y a minusculas es tolower().  Ejemplo: cadena[i] = tolower(cadena[i]); A=65 */
	
	//FORMA 1 : CARGAR EL ARREGLO CON LETRAS Y LUEGO ASIGNARLE UN PUNTERO 
	//FORMA 2 :DECLARAR EL ARREGLO VACIO  ,ASIGNARLE UN PUNTERO Y LUEGO CARGAR EL PUNTERO DEL ARREGLO  
	
	
	
	//DECLARACION DE VARIABLES ESCALARES
	int i=0;
	
	
	
	//DECLARAMOS UN ARREGLO de caracteres 
	char abecedario[27]={' '};
	//declaramos un puntero de caracteres
	char *abc;
	abc=abecedario;
	
	//PRIMERO CARGAMOS EL ARREGLO
	for(i=0;i<26;i++)
	{
		*(abc+i)=65+i;
		//ES LO MISMO ESCRIBIR EN LINEA 28 *(ABC+i)=65+i;
		
	}
	
	
	
	//IMPRIMIMOS EL ARREGLO 
	for (i=0;i<26;i++)
	{
		printf(" %c",toupper(*abc+i));   //Ò toupper(*abc++)) 
		printf ("\n");
		printf(" %c",tolower(*(abc+i)));    //escribi de dos formas distintas en lo que esta dentro del prentesis ,linea 38 y 40 ( las dos funcionan)
		printf ("\n");
	}
	
	
	
	return 0;
}

