#include <iostream>
#include <stdlib.h>     //recordar es buena practica no poner ambas librerias de codigo ..poner una ..
#include <ctime>
using namespace std;
//1. Crear un programa que pida los siguientes datos de una canción: Artista, Titulo, Duración (en segundos),Tamaño del archivo (en KB).
//Crear una estructura que almacene datos de la canción y luego los muestre por pantalla.

struct cancion
{
	string titulo;
	string artista;
	int duracion;
	int tamanio_archivo;
};


int main(int argc, char *argv[]) {
	struct cancion c;
	char opcion=' ';
	int contador=0,contador2=0;
	
	do{
		printf("ingrese titulo de cancion\n");
		scanf("%s",&c.titulo);	
		contador++;
		
		printf("continuar? S/N\n");
		
		scanf(" %c",&opcion);
	}while(opcion=='s' );
	do{
		printf("ingrese artista\n");
		scanf("%s",&c.artista);	
		contador2++;
		
		printf("continuar? S/N\n");
	
		scanf(" %c",&opcion);
	}while(opcion=='s');
	
	//--------------------------
	printf("ingrese duracion\n");
	scanf("%d", &c.duracion);
	
	printf("ingrese tamanio KB \n");
	scanf("%d", &c.tamanio_archivo);
	
	//--------------------------
	printf("titulos:    ");
	for(int i=0;i<contador;i++)
	{
		printf("%s\t",c.titulo);
	}
	printf("\n");
	//--------------------------
	printf("artistas:     ");
	for(int i=0;i<contador2;i++)
	{
		printf("%s\t",c.artista);
	}
	
	//------------------------
	printf("\n");
	printf("Duracion: %d\n",c.duracion);
	printf("tamanio: %d\n",c.tamanio_archivo);
	
	return 0;
}
