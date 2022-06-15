#include "buscas.h"
#include <stdio.h>

int buscaSequencial(int* vetor, unsigned int tamanhoVetor, int valor){
    for(unsigned int i = 0; i < tamanhoVetor; i++){
        if(vetor[i] == valor) return 1;
    }

    return 0;
}

int buscaBinaria(int* vetor, unsigned int tamanhoVetor, int valor){
    unsigned int meio = (unsigned int) tamanhoVetor/2;
    
    if(tamanhoVetor==0) return 0;

    if(vetor[meio]==valor) return 1;

    if(valor < vetor[meio]) return buscaBinaria(vetor, meio, valor);

    else return buscaBinaria(vetor + meio, tamanhoVetor - 1 - meio, valor);

    return 0;
}