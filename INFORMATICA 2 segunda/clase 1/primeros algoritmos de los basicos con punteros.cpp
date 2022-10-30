#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int num1=48;
	int *dir_num_1;
	dir_num_1=&num1;
	
	*dir_num_1=10;
	*(dir_num_1)=(*(dir_num_1)+10);
	printf("%X \n",&dir_num_1);
	printf("%X \n",&num1);
	
	printf("%d \n",*dir_num_1);      // es lo mismo con o sin parentesis ,tira el valor de la variable a la que apunte
	
	//---------------
	dir_num_1++;   
	printf("%X \n",&dir_num_1);  
	printf("%X \n",&num1);
	
	
	
	return 0;
}

