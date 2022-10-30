#include <iostream>
#include <stdio.h>
using namespace std;
struct cancion{
	string artista;
	string titulo;
	int duracion;
	int tamano_archivo;
};
void cargar_nueva(struct cancion);
int main(int argc, char *argv[]) {
	char opcion=' ';
	struct cancion ca[3];
	printf("Ingrese los siguientes datos de las canciones:\n");
	for(int i=0;i<3;i++){
		printf("Nombre del artista:\n");
		scanf("%s", &ca[i].artista);
		printf("\nNombre de la cancion:\n");
		scanf("%s", &ca[i].titulo);
		printf("\nDuracion de la cancion:\n");
		scanf("%d", &ca[i].duracion);
		printf("\nTamaño del archivo:\n");
		scanf("%d", &ca[i].tamano_archivo);
	}
	for(int i=0;i<3;i++){
		printf("\nDatos de la cancion:\n");
		printf("Artista: %s",ca[i].artista);
		printf("\nTitulo: %s",ca[i].titulo);
		printf("\nDuracion: %d",ca[i].duracion);
		printf("\nTamanio del archivo: %d",ca[i].tamano_archivo);
	}
	printf("\n\nMenu de opciones:\n");
	printf("a.Agregar una cancion\nb.Mostrar todas las canciones\nc.Buscar una cancion por titulo\n");
	switch(opcion){
		case 'a':
			cargar_nueva(ca);
	}
	return 0;
}
void cargar_nueva(struct cancion ca){
	printf("Ingrese los siguientes datos de la nueva cancion:\n");
	printf("Nombre del artista:\n");
	scanf("%s", &ca.artista);
	printf("\nNombre de la cancion:\n");
	scanf("%s", &ca.titulo);
	printf("\nDuracion de la cancion:\n");
	scanf("%d", &ca.duracion);
	printf("\nTamaño del archivo:\n");
	scanf("%d", &ca.tamano_archivo);
}
