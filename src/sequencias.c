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

int acessarValorSeqCirc(SequenciaVCirc *sequencia, int posicao){
    if(posicao < 0 || posicao > sequencia->tamanho) return 0;

    int index = (posicao + sequencia->offset)%sequencia->tamanho;

    return sequencia->valores[index];
}

void inserirInicioSeqCirc(SequenciaVCirc *sequencia, int valor){
    if(sequencia->n == sequencia->tamanho) return;

    int iInicio = (sequencia->offset - 1)%sequencia->tamanho;
    sequencia->valores[iInicio] = valor;

    sequencia->offset = iInicio;
    sequencia->n++;
}

void inserirFimSeqCirc(SequenciaVCirc *sequencia, int valor){
    if(sequencia->n = sequencia->tamanho) return;

    int iFim = (sequencia->offset + sequencia->n)%sequencia->tamanho;
    sequencia->valores[iFim] = valor;
    sequencia->n++;
}

void removerInicioSeqCirc(SequenciaVCirc *sequencia){
    if(sequencia->n == 0) return;

    sequencia->valores[sequencia->offset] = 0; // Deixa o valor como 0
    sequencia->offset++;
    sequencia->n--;
}

void removerFimSeqCirc(SequenciaVCirc *sequencia){
    if(sequencia->n == 0) return;

    sequencia->valores[sequencia->n] = 0; // Limpa o último elemento do vetor
    sequencia->n--;
}