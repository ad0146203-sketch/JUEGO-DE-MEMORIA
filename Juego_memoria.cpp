/*JUEGO DE MEMORIA*/
#include<stdio.h>
#include<stdlib.h> //rand 
#include<time.h>

#define MAX 50
//prtotipos
    void generarSecuencia(int secuencia[], int longitud);
    void mostrarSecuencia(int secuencia[], int longitud);
    void leerSecuencia(int secuencia_usuario[], int longitud);
    int compararSecuencias(int secuencia[], int secuencia_usuario[], int longitud);


int main(){
    int secuencia[MAX];
    int secuencia_usuario[MAX];
    int longitud, puntuacion, aciertos;
    char opcion;
    srand(time(NULL));
    printf("--------Simon Dice-------");
    printf("Memoriza los números (del 1 al 4 y repitelos en el mismo orden.\n");
    

    do{
        longitud = 1;//cuantos numeros tiene la secuencia actual
        puntuacion = 0;//reiniciar las variables para que cada partida comience desde cero
        aciertos=1;

        while(aciertos && longitud <= MAX){// si el jugador acierta continuamos con las rondas
            generarSecuencia(secuencia, longitud);
            mostrarSecuencia(secuencia, longitud);
            leerSecuencia(secuencia_usuario, longitud);

            if(compararSecuencias(secuencia, secuencia_usuario, longitud)){
            	longitud++;
            	puntuacion++; 
 	}else{
 		aciertos=0;
 		printf("\nIncorrecto\n");
	 }
}
	 printf("Tu puntuacion fue de: %d", puntuacion);
	 printf("¿Desea seguir jugando? ( s= si/ n/no) ");
	 scanf(" %c", &opcion);
	 
    }while(opcion=='s');//permite seguir jugando
}//int main

void generarSecuencia(int secuencia[], int longitud){
      secuencia[longitud -1] = rand() % (4 - 1 + 1)+1;//aqui generamos la secunecia del 1 al cuatro tal como nos pide
      //longitud-1 porque generamos la ronda actual
	}

void mostrarSecuencia(int secuencia[], int longitud){
	for(int i=0;  i<longitud; i++){//
		printf("%d\n", secuencia[i]);//mostramos el valor que vayamos generando con el aleatorio
	}
printf("\nPresiona ENTER para continuar...");
while(getchar() != '\n');
system("cls"); //para que no tome el salto de linea 
}

void leerSecuencia(int secuencia_usuario[], int longitud){
	for(int i=0; i<longitud; i++){
	printf("Querido jugador ingrese el numero: %d", i+1);//para que el usuario sepa la posicion 
	scanf("%d", &secuencia_usuario[i]); //leer el numero que inserta el usuario
}
}

int compararSecuencias(int secuencia[], int secuencia_usuario[], int longitud){
	for(int i=0; i<longitud; i++){//recorremos ambos vectores
		if(secuencia[i] != secuencia_usuario[i]){//comparamos ambos vectores ya generados si uno es distinto es false retornamos 0
			return 0;
	}
}
	return 1;//si es verdadero returnamos 1

}

