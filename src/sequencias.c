#include "sequencias.h"

int acessarValorSeqV(SequenciaVetor sequencia, unsigned int posicao){
    if(posicao < 0 || posicao >= sequencia.tamanho) return 0;

    return sequencia.valores[posicao];
}

void inserirValorSeqV(SequenciaVetor sequencia, int valor, unsigned int posicao){
    if(posicao < 0 || posicao >= sequencia.tamanho) return;
    
}