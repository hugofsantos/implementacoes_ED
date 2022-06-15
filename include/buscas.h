#ifndef Buscas_H
#define Buscas_h


/**
 * @brief Realiza uma busca sequencial para verificar se um elemento está ou não em um vetor
 * 
 * @param vetor Vetor a ser analisado
 * @param tamanhoVetor Tamanho do vetor analisado 
 * @param valor Valor a ser verificado se está ou não no vetor 
 * @return 1 se o valor está no vetor, 0 caso contrário
 */
int buscaSequencial(int* vetor, unsigned int tamanhoVetor, int valor);

/**
 * @brief Realiza uma busca binária para verificar se um elemento está ou não no vetor (Exige que o vetor esteja ordenado)
 * 
 * @param vetor Vetor a ser analisado
 * @param tamanhoVetor Tamanho do vetor analisado
 * @param valor Valor a ser verificado se está ou não no vetor
 * @return int se o valor está no vetor, 0 caso contrário
 */
int buscaBinaria(int* vetor, unsigned int tamanhoVetor, int valor);

#endif