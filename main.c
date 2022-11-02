#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void incrementoPorReferencia(int *a);
void incrementoPorValor(int a);

void main(){
    int referencia = 6;
    
    incrementoPorReferencia(&referencia);
    incrementoPorValor(referencia);

    printf("Valor: %d", referencia);

}

void incrementoPorReferencia(int *a){
    *a += 10;
}

void incrementoPorValor(int a){
    a += 10;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void longitud(char *nombre);

void main(){
    longitud("omar");
}

void longitud(char *nombre){
    printf("Tamano: %s", nombre);
}*/
