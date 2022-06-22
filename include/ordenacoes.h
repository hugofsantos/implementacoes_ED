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

/**
 * @brief Ordena o vetor com insertion sort
 * 
 * @param vetor Vetor a ser ordenado
 * @param n Tamanho do vetor
 */
void insertionSort(int* vetor, unsigned int n);

/**
 * @brief Separa um vetor em duas partes (Uma que é menor que o pivot e outra maior que o pivot) para o quick sort
 * 
 * @param vetor Endereço de memória do vetor a ser separado
 * @param n Tamanho do vetor a ser separado
 * @param pivot Posição do pivot na separação
 * 
 * @return unsigned int referente ao pivot da separação
 */
unsigned int separacaoQuickSort(int* vetor, unsigned int n, unsigned int pivot);

/**
 * @brief Ordena o vetor com quick sort
 * 
 * @param vetor Vetor a ser ordenado
 * @param n Tamanho do vetor
 * @param pivot Posição do pivot na ordenação
 */
void quickSort(int* vetor, unsigned int n, unsigned int pivot);


#endif