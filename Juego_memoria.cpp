/*JUEGO DE MEMORIA*/
#include<stdio.h>
#include<stdlib> //rand 
#include<time.h>

#define MAX 100
//prtotipos
    void generarSecuencia(int secuencia[], int longitud);
    void mostrarSecuencia(int secuencia[], int longitud);
    void leerSecuencia(int secuencia[], int longitud);
    int compararSecuencias(int secuencia[], int secuencia_usuario, int longitud[]);


int main(){
    int secuencia[MAX];
    int secuencia_usuario[MAX];
    int longitud, puntuacion, aciertos;
    char opcion;
    srand(time(NULL));
    printf("--------Simon Dice-------");n
    printf("Memoriza los números (del 1 al 4 y repitelos en el mismo orden.\n);
    return 0;

    do{
        longitud = 1;//cuantos numeros tiene la secuencia actual
        puntuacion = 0;
        acierto=1;

        while(acierto){
            generarSecuencia(secuencia, longitud);
            mostrarSecuencia(secuencia, longitud);
            leerSEcuencia(secuencia_usuario, longitud);

            if(compararSecuencias(secuencia, secuencia_usuario, longitud)){
                
        
}//while
        }//int main

void generarSecuencia(int secuencia[], int longitud){
    
}

void mostrarSecuencia(int secuencia[], int longitud){
}

void leerSecuencia(int secuencia[], int longitud){
}

int compararSecuencias(int secuencia[], int secuencia_usuario, int longitud[]){
}
