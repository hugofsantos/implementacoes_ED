#ifndef Clock_H
#define Clock_H

#include "sequencias.h"

/**
 * @brief Preenche um vetor com números inteiros consecutivos (1, 2, 3, 4...)
 * 
 * @param v vetor a ser preenchido
 * @param qntElementos Quantidade de elementos a serem colocados (Nesse caso, trata-se do tamanho do vetor)
 */
void preencherVetor(int* v, unsigned int qntElementos);

/**
 * @brief Preenche um vetor com números inteiros consecutivos do maior pro menor (50, 49, 48, ... , 3, 2, 1, 0)
 * 
 * @param v vetor a ser preenchido
 * @param qntElementos Quantidade de elementos a serem colocados (Nesse caso, trata-se do tamanho do vetor)
 */
void preencherVetorDesc(int *v, unsigned int qntElementos);

/**
 * @brief Imprime os elementos de um vetor
 * 
 * @param v Vetor a ser impresso
 * @param qntElementos Quantidade de elementos a serem impressos
 */
void imprimirVetor(int *v, unsigned int qntElementos);

/**
 * @brief Calcula o tempo de execução da busca sequencial
 * 
 * @param vetor Vetor a ser analisado
 * @param tamanhoVetor Tamanho do vetor
 * @param valor Elemento a ser buscado
 * @return long int tempo em ms da execução da função
 */
long int  clockBuscaSequencial(int* vetor, unsigned int tamanhoVetor, int valor);

/**
 * @brief Calcula o tempo de execução da busca binária
 * 
 * @param vetor Vetor a ser analisado
 * @param tamanhoVetor Tamanho do vetor
 * @param valor Elemento a ser buscado
 * @return long int tempo em ms da execução da função
 */
long int clockBuscaBinaria(int* vetor, unsigned int tamanhoVetor, int valor);

/**
 * @brief Calcula o tempo de execução do Bubble Sort
 * 
 * @param vetor Vetor a ser ordenado
 * @param n Tamanho do vetor
 * @return long int referente ao tempo em ms da execução da função
 */
long int clockBubbleSort(int* vetor, unsigned int n);

/**
 * @brief Calcula o tempo de execução do selection sort
 * 
 * @param vetor Vetor a ser ordenado
 * @param n Tamanho do vetor
 * @return long int referente ao tempo em ms da execução da função
 */
long int clockSelectionSort(int* vetor, unsigned int n);

/**
 * @brief Calcula o tempo de execução do insertion sort
 * 
 * @param vetor Vetor a ser ordenado
 * @param n Tamanho do vetor
 * @return long int referente ao tempo em ms da execução da função
 */
long int clockInsertionSort(int* vetor, unsigned int n);

/**
 * @brief Calcula o tempo de execução do quick sort
 * 
 * @param vetor Vetor a ser ordenado
 * @param n Tamanho do vetor
 * @param pivot Posição do pivot na ordenação
 * 
 * @return long int referente ao tempo em ms da execução da função
 */
long int clockQuickSort(int* vetor, unsigned int n, unsigned int pivot);

/**
 * @brief Calcula o tempo de execução do merge sort
 * 
 * @param vetor Vetor a ser ordenado
 * @param n Tamanho do vetor
 * @return long int referente ao tempo em ms da execução da função
 */
long int clockMergeSort(int* vetor, unsigned int n);

/**
 * @brief Calcula o tempo de execução da remoção de um valor em uma sequência implementada como vetor
 * 
 * @param sequencia Sequência a ser removido o valor
 * @param posicao Posição a ser removido da sequência (0, 1, 2...)
 * @return long int referente ao tempo em ms de execução da função
 */
long int clockRemocaoValorSeqV(SequenciaVetor *sequencia, unsigned int posicao);

/**
 * @brief Calcula o tempo de execução da remoção de um valor em uma sequência implementada como vetor
 * 
 * @param sequencia Sequência a ser inserido o valor
 * @param valor Valor a ser inserido
 * @param posicao Posição a ser inserido da sequência (0, 1, 2...)
 * @return long int referente ao tempo em ms de execução da função
 */
long int clockInsercaoValorSeqV(SequenciaVetor *sequencia, int valor, int posicao);

/**
 * @brief Calcula o tempo  de execução da busca e um valor em uma sequência implementada com vetor
 * 
 * @param sequencia referência para a sequência em que você irá buscar o valor
 * @param posicao Posição do valor que você quer acessar
 * @return int Valor buscado (ou 0 se a posição não for válida) 
 */
long int clockAcessoValorSeqV(SequenciaVetor *sequencia, int posicao);

#endif