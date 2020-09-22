#include<stdio.h>

void capturar_enteros(){
	
	int enteros[5];
	float promedio;
	int suma = 0;
	for(size_t i=0; i < 5; i++){
		
		scanf("%i", &enteros[i]);
	}
	for(size_t i=0; i < 5; i++){
		
		printf("%i\n", enteros[i]);
	}
	for(size_t i=0; i < 5; i++){
		
		suma=suma+enteros[i];
	}
	printf("Suma: %i\n", suma);
	printf("Pormedio: %.2f\n", suma/5.0);
	
}

void mostrar(int n, char cadena[]){
	for(size_t i=0; i < n; i++){
		printf("%s", cadena);
	}
}

struct personaje{
	char nombre[20];
	char tipo[20];
	float fuerza;
	int salud;
}personajes[5];

unsigned int cont=0;

void capturar_personajes(){
	if(cont < 5){
	
		printf("Nombre: ");
		scanf("%s", personajes[cont].nombre);
		printf("Tipo: ");
		scanf("%s", personajes[cont].tipo);
		fflush(stdin);
		printf("Fuerza: ");
		scanf("f", personajes[cont].fuerza);
		fflush(stdin);
		printf("Salud: ");
		scanf("%i", &personajes[cont].salud);
		cont++;
	}
	else{
		printf("\nEl arreglo de personajes esta lleno\n");
	}
}

void mostrar_personajes(){
	int i;
	for(i = 0; i < cont; i++){
		printf("Nombre: %s\n", personajes[i].nombre);
		printf("Tipo: %s\n", personajes[i].tipo);
		printf("Fuerza: %f\n", personajes[i].fuerza);
		printf("Salud: %i\n", personajes[i].salud);
	}
}

int main(){
	
	char op;
	char cadena[20];
	int n;
	
	do{
		printf("1) Capturar enteros\n");
		printf("2) Mostrar caden n veces\n");
		printf("3) Aregar personaje\n");
		printf("4) Mostrar personajes\n");
		printf("0) Salir\n");
		scanf("%c",&op);
		
		switch(op){
			case '1':
				capturar_enteros();
				break;
				
			case '2':
				printf("Escribe una cadena de hasta 20 caracteres: ");
				fflush(stdin);
				fgets(cadena, sizeof(cadena), stdin);
				printf("n: ");
				scanf("%i",&n);
				mostrar(n, cadena);
				break;
			
			case '3':
				capturar_personajes();
				break;
			
			case '4':
				mostrar_personajes();
				break;	
					
			case '0':
				
				break;
			
		
		}
		
		fflush(stdin);
	}while(op != 0);
	
	
	return 0;
}
