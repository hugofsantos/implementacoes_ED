#ifndef Clock_H
#define Clock_H

/**
 * @brief Preenche um vetor com números inteiros consecutivos (1, 2, 3, 4...)
 * 
 * @param v vetor a ser preenchido
 * @param qntElementos Quantidade de elementos a serem colocados (Nesse caso, trata-se do tamanho do vetor)
 */
void preencherVetor(int* v, unsigned int qntElementos);

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

#endif