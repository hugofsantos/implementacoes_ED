#include "sequencias.h"

int acessarValorSeqV(SequenciaVetor *sequencia, unsigned int posicao){
    if(posicao < 0 || posicao >= sequencia->tamanho) return 0;

    return sequencia->valores[posicao];
}

void inserirValorSeqV(SequenciaVetor *sequencia, int valor, int posicao){
    if(posicao < 0 || posicao >= sequencia->tamanho || sequencia->n == sequencia->tamanho) return;

    if(posicao >= sequencia->n){
        sequencia->valores[sequencia->n++] = valor;
        return;
    }

    for(int i = sequencia->n - 1; i >= posicao; i--){
        sequencia->valores[i+1] = sequencia->valores[i];
    }

    sequencia->valores[posicao] = valor;
    sequencia->n++;
}

void removerValorSeqV(SequenciaVetor *sequencia, unsigned int posicao){
    if(posicao < 0 || posicao >= sequencia-> n || sequencia->n == 0) return;

    for(unsigned int i = posicao; i < sequencia->n - 1; i++){
        sequencia->valores[i] = sequencia->valores[i+1];
    }

    sequencia->valores[sequencia->n - 1] = 0;
    sequencia->n--;
}