#include <iostream>
#include <stdio.h>
using namespace std;
struct cancion{     //recordar "struct cancion" es  el TIPO de variable.. 
	string artista;    //TIPOS DE DATOS DE LA ESTRUCTURA 
	string titulo;
	int duracion;
	int tamano_archivo;
};
int main(int argc, char *argv[]) {
	struct cancion SALVAJE ; //DECLARAMOS LA VARIABLE "SALVAJE" DE TIPO ESTRUCTURA 
	printf("Ingrese los siguientes datos de la cancion:\n");
	printf("Nombre del artista:\n");
	scanf("%s", &SALVAJE.artista);         //PARA ACCEDER AL DATO ARTISTA DE LA ESTRUCTURA 
	printf("\nNombre de la cancion:\n");
	scanf("%s", &SALVAJE.titulo);
	printf("\nDuracion de la cancion EN MINUTOS:\n");
	scanf("%d", &SALVAJE.duracion);
	printf("\nTamaño del archivo EN KB :\n");
	scanf("%d", &SALVAJE.tamano_archivo);
	printf("\nDatos de la cancion:\n");
	printf("Artista: %s",SALVAJE.artista);
	printf("\nTitulo: %s",SALVAJE.titulo);
	printf("\nDuracion: %d",SALVAJE.duracion);
	printf("\nTamanio del archivo: %d",SALVAJE.tamano_archivo);
	return 0;
}

