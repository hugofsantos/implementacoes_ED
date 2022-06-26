#ifndef Sequencias_H
#define Sequencias_H

/**
 * @brief TAD sequência implementada como vetor
 * 
 * @param tamanho Tamanho da sequência
 * @param valores Vetor de valores armazenados na sequência
 */
typedef struct{
    unsigned int tamanho;
    int *valores;
} SequenciaVetor;

/**
 * @brief 
 * 
 * @param sequencia Sequência em que você irá buscar o valor
 * @param posicao Posição do valor que você quer acessar
 * @return int Valor buscado (ou 0 se a posição não for válida) 
 */
int acessarValorSeqV(SequenciaVetor sequencia, unsigned int posicao);

/**
 * @brief Insere um valor em uma sequência implementada com vetor
 * 
 * @param sequencia Sequência na qual o elemento será inserido
 * @param valor Valor a ser inserido
 * @param posicao Posição onde o valor deve ser inserido
 */
void inserirValorSeqV(SequenciaVetor sequencia, int valor, unsigned int posicao);

#endif