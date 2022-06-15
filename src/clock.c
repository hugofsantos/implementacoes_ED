#include "clock.h"
#include "buscas.h"
#include <time.h>

void preencherVetor(int* v, unsigned int qntElementos){
    for(unsigned int i=0; i < qntElementos; i++){
        v[i] = i;
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