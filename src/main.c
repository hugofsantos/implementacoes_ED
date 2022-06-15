#include "buscas.h"
#include <stdio.h>
#include "clock.h"
#include <time.h>
#include <stdlib.h>

int main(void){
    clock_t time; // Variável para armazenar o tempo em ms
    int* vetor = (int*) malloc(sizeof(int) * 10000);
    preencherVetor(vetor, 10000);


    time = clockBuscaSequencial(vetor, 10000, 10000);
    printf("Tempo de execução: %ld\n", time);

    time = clockBuscaBinaria(vetor, 10000, 10000);
    printf("Tempo de execução: %ld\n", time);
    
    return 0;
}