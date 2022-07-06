#ifndef Sequencias_H
#define Sequencias_H

/**
 * @brief TAD sequência implementada como vetor
 * 
 * @param tamanho Tamanho máximo da sequência
 * @param n Quantidade de elementos que estão inseridos na sequência
 * @param valores Vetor de valores armazenados na sequência
 */
typedef struct{
    unsigned int tamanho;
    unsigned int n;
    int *valores;
} SequenciaVetor;

/**
 * @brief Procura o valor de uma determinada posição em uma sequência
 * 
 * @param sequencia referência para a sequência em que você irá buscar o valor
 * @param posicao Posição do valor que você quer acessar
 * @return int Valor buscado (ou 0 se a posição não for válida) 
 */
int acessarValorSeqV(SequenciaVetor *sequencia, unsigned int posicao);

/**
 * @brief Insere um valor em uma sequência implementada com vetor
 * 
 * @param sequencia referência para a sequência na qual o elemento será inserido
 * @param valor Valor a ser inserido
 * @param posicao Posição onde o valor deve ser inserido
 */
void inserirValorSeqV(SequenciaVetor *sequencia, int valor, int posicao);

/**
 * @brief Remove um valor de uma determinada posição em uma sequência implementada com vetor
 * 
 * @param sequencia referência para a sequência na qual o elemento será removido
 * @param posicao Posição onde o valor deve ser removido
 */
void removerValorSeqV(SequenciaVetor *sequencia, unsigned int posicao);

/**
 * @brief TAD sequência implementada como um vetor circular
 * 
 * @param tamanho Tamanho máximo da sequência
 * @param n Quantidade de elementos que estão inseridos na sequência
 * @param offset Índice que representa o início da sequência
 * @param valores Vetor de valores inteiros da sequência
 */
typedef struct{
    unsigned int tamanho;
    unsigned int n;
    unsigned int offset;
    int* valores;
}SequenciaVCirc;

/**
 * @brief Procura o valor de uma determinada posição na sequência do vetor circular
 * 
 * @param sequencia Referência para sequência implementada como vetor circular
 * @param posicao Posição do valor que deseja acessar
 * @return int valor buscado (ou 0 se oa posição for inválida)
 */
int acessarValorSeqCirc(SequenciaVCirc *sequencia, int posicao);

/**
 * @brief Insere no início de uma sequência implementada com vetor circular
 * 
 * @param sequencia Referência para a sequência na qual o valor será inserido
 * @param valor Valor a ser inserido no início da sequência
 */
void inserirInicioSeqCirc(SequenciaVCirc *sequencia, int valor);

/**
 * @brief Insere no fim de uma sequência implementada com vetor circular
 * 
 * @param sequencia Referência para a sequência na qual o valor será inserido
 * @param valor Valor a ser inserido no fim da sequência
 */
void inserirFimSeqCirc(SequenciaVCirc *sequencia, int valor);

/**
 * @brief Remove o primeiro elemento de uma sequência implementada com vetor circular
 * 
 * @param sequencia Sequência a ser modificada
 */
void removerInicioSeqCirc(SequenciaVCirc *sequencia);

/**
 * @brief Remove o último elemento de uma sequência implementada com vetor circular
 * 
 * @param sequencia Sequência a ser modificada
 */
void removerFimSeqCirc(SequenciaVCirc *sequencia);

#endif