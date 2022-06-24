#include "clock.h"
#include "buscas.h"
#include "ordenacoes.h"

#include <time.h>
#include <stdio.h>

void preencherVetor(int* v, unsigned int qntElementos){
    for(unsigned int i=0; i < qntElementos; i++){
        v[i] = i;
    }
}

void preencherVetorDesc(int *v, unsigned int qntElementos){
    const unsigned int min = 0 - 1;

    for(unsigned int val = qntElementos; val > 0; val--){
       const unsigned int i = qntElementos - val;

       v[i] = val-1; // Vai preencher de qntElementos - 1 até o 0
    }
}

void imprimirVetor(int *v, unsigned int qntElementos){
    for(unsigned int i = 0; i < qntElementos; i++){
        printf("%d\n", v[i]);
    }
}

long int clockBuscaSequencial(int* vetor, unsigned int tamanhoVetor, int valor){
    clock_t time;

    time = clock(); // Inicia a contagem
    buscaSequencial(vetor, tamanhoVetor, valor);
    time = clock() - time; // Finaliza a contagem

    return time;
}

long int clockBuscaBinaria(int* vetor, unsigned int tamanhoVetor, int valor){
    clock_t time;

    time = clock(); // Inicia a contagem
    buscaBinaria(vetor, tamanhoVetor, valor);
    time = clock() - time; // Finaliza a contagem

    return time;    
}

long int clockBubbleSort(int* vetor, unsigned int n){
    clock_t time;

    time = clock(); // Inicia a contagem
    bubbleSort(vetor, n);
    time = clock() - time; // Finaliza a contagem

    return time;  
}

long int clockSelectionSort(int* vetor, unsigned int n){
    clock_t time;

    time = clock(); // Inicia a contagem
    selectionSort(vetor, n);
    time = clock() - time; // Finaliza a contagem

    return time;     
}

long int clockInsertionSort(int* vetor, unsigned int n){
    clock_t time;

    time = clock(); // Inicia a contagem
    insertionSort(vetor, n);
    time = clock() - time; // Finaliza a contagem

    return time;      
}

long int clockQuickSort(int* vetor, unsigned int n, unsigned int pivot){
    clock_t time;

    time = clock(); // Inicia a contagem
    quickSort(vetor, n, pivot);
    time = clock() - time; // Finaliza a contagem

    return time;  
}

long int clockMergeSort(int* vetor, unsigned int n){
    clock_t time;

    time = clock(); // Inicia a contagem
    mergeSort(vetor, n);
    time = clock() - time; // Finaliza a contagem

    return time;         
}