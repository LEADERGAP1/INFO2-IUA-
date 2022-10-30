#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int a=45,b=55;
	int intercambio=0,intercambio2=0;
	int *puntero,*puntero2;         //declaro variables de tipo puntero 
	puntero=&a;                      // esta guardara la direccion de memoria de la variable a ,
	puntero2=&b;                     // esta guardara la direccion de memoria de la variable b
	printf("EL VALOR DE a es %d \n",a);
	printf("EL VALOR DE b es %d \n",b);
	//intercambio utilizando punteros 
	
	//intercambio=*puntero;      //se guarda el valor de a en intecambio                 //INTERCAMBIANDO CON MAS DE UNA VARIABLE AUXILIAR..
	//intercambio2=*puntero2;    //se guarda el valor de b en intercambio2               
	//*puntero=intercambio2;      //  puntero  es igual a intercambio2
	//*puntero2=intercambio;     //puntero2 es igual a  intercambio 
	//--------------------------------------------------------------------------------
	intercambio=*puntero;           //INTERCAMBIO VA A SER IGUSAL A : "EL VALOR DE LA VARIABLE CUYA DIRECCION DE MEMORIA ESTA ALMACENADA EN PUNTERO.. (SINTESIS:VA A SER IGUAL A a..)
	*puntero=*puntero2;             //RECORDAR cada vez que trbajo con un puntero debo ponerle el *     (SINTESIS:PUNTERO VA A SER IGUAL A b..)
	*puntero2=intercambio;          //esta es otra forma de intercambio utilizando SOLO UNA VARIABLE MÁS..   (SINTESIS:PUNTERO2 VA A SER IGUAL A intercambio QUE ES IGUAL A a..) 
	printf("EL VALOR NUEVO DE a es %d \n",a);
	printf("EL VALOR NUEVO DE b es %d \n",b);
	
	return 0;
}


	
