#include "buscas.h"
#include "clock.h"
#include "ordenacoes.h"
#include "sequencias.h"

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define VBUSCAS_SIZE 10000
#define VSORT_SIZE 100
#define VSEQUENCIA_SIZE 10000

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

    preencherVetorDesc(vetorSort, VSORT_SIZE);//preencherVetorDesc(vetorSort, VSORT_SIZE);
    time = clockQuickSort(vetorSort, VSORT_SIZE, VSORT_SIZE/2);
    printf("Tempo de execução do quick sort no melhor caso: %ld\n", time);

    preencherVetorDesc(vetorSort, VSORT_SIZE);
    time = clockQuickSort(vetorSort, VSORT_SIZE, 0);
    printf("Tempo de execução do quick sort no pior caso: %ld\n", time);

    preencherVetorDesc(vetorSort, VSORT_SIZE);
    time = clockMergeSort(vetorSort, VSORT_SIZE);
    printf("Tempo de execução do merge sort: %ld\n", time);

    // Testes Sequência (Vetor)
    SequenciaVetor vSequencia;
    vSequencia.valores = (int*) malloc(sizeof(int) * VSEQUENCIA_SIZE);
    vSequencia.n = VSEQUENCIA_SIZE;
    vSequencia.tamanho = VSEQUENCIA_SIZE;

    preencherVetor(vSequencia.valores, VSEQUENCIA_SIZE);

    time = clockRemocaoValorSeqV(&vSequencia, VSEQUENCIA_SIZE-1);
    printf("Tempo de execução da remoção do último elemento da sequência vetor: %ld\n", time);

    time = clockRemocaoValorSeqV(&vSequencia, 0);
    printf("Tempo de execução da remoção do primeiro elemento da sequência vetor: %ld\n", time);

    time = clockInsercaoValorSeqV(&vSequencia, 0, vSequencia.n-1);
    printf("Tempo de execução da inserção no fim da sequência vetor: %ld\n", time);

    time = clockInsercaoValorSeqV(&vSequencia, 0, 0);
    printf("Tempo de execução da inserção no início da sequência vetor: %ld\n", time);

    time = clockAcessoValorSeqV(&vSequencia, 0);
    printf("Tempo de execução do acesso ao início da sequência vetor: %ld\n", time);

    time = clockAcessoValorSeqV(&vSequencia, vSequencia.n - 1);
    printf("Tempo de execução do acesso ao fim da sequência vetor: %ld\n", time);
    return 0;
}