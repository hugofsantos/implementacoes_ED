#include "buscas.h"
#include "clock.h"
#include "ordenacoes.h"

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define VBUSCAS_SIZE 10000
#define VSORT_SIZE 100

int main(void){
    clock_t time; // Variável para armazenar o tempo em ms
    int* vetorBuscas = (int*) malloc(sizeof(int) * VBUSCAS_SIZE);
    preencherVetor(vetorBuscas, VBUSCAS_SIZE);

    // Teste de buscas
    time = clockBuscaSequencial(vetorBuscas, VBUSCAS_SIZE, 10000);
    printf("Tempo de execução da busca sequencial: %ld\n", time);

    time = clockBuscaBinaria(vetorBuscas, VBUSCAS_SIZE, 10000);
    printf("Tempo de execução da busca binária: %ld\n", time);
    
    // Teste de ordenação
    int* vetorSort = (int*) malloc(sizeof(int) * VSORT_SIZE);
    preencherVetorDesc(vetorSort, VSORT_SIZE);

    time = clockBubbleSort(vetorSort, VSORT_SIZE);
    printf("Tempo de execução do bubble sort: %ld\n", time);

    preencherVetorDesc(vetorSort, VSORT_SIZE);
    time = clockSelectionSort(vetorSort, VSORT_SIZE);
    printf("Tempo de execução do selection sort: %ld\n", time);

    preencherVetorDesc(vetorSort, VSORT_SIZE);
    time = clockInsertionSort(vetorSort, VSORT_SIZE);
    printf("Tempo de execução do insertion sort: %ld\n", time);

    return 0;
}