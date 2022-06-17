#ifndef Sort_H
#define Sort_H

/**
 * @brief Realiza a troca entre dois valores inteiros
 * 
 * @param n1 referência para primeiro inteiro
 * @param n2 referência para segundo inteiro
 */
void trocarValores(int *n1, int *n2);

/**
 * @brief Ordena o vetor com bubble sort
 * 
 * @param vetor Referência para um vetor de inteiros
 * @param n Tamanho do vetor
 */
void bubbleSort(int* vetor, unsigned int n);

/**
 * @brief Ordena o vetor com selection sort
 * 
 * @param vetor Vetor a ser ordenado
 * @param n Tamanho do vetor
 */
void selectionSort(int* vetor, unsigned int n);

#endif