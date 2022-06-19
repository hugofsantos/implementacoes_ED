#include "ordenacoes.h"

void trocarValores(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubbleSort(int *vetor, unsigned int n){
    short int houveTroca = 0;
    
    do{
        houveTroca = 0;

        for(unsigned int i = 0; i < (n - 1); i++){
            if(vetor[i] > vetor[i+1]){
                trocarValores(&vetor[i], &vetor[i+1]);
                houveTroca = 1;
            }
        }

    }while(houveTroca);
}

void selectionSort(int* vetor, unsigned int n){
    for(unsigned int i = 0; i < (n-1); i++){
        unsigned int iMenor = i; // Índice do menor elemento
        
        for(unsigned int j = i+1; j < n; j++){
            if(vetor[j] < vetor[iMenor])
                iMenor = j;
        }

        trocarValores(&vetor[i], &vetor[iMenor]);
    }
}

void insertionSort(int* vetor, unsigned int n){
    for(unsigned int i = 1; i < n; i++){
        for(unsigned int j = i; j > 0 && vetor[j]<vetor[j-1]; j--)
            trocarValores(&vetor[j], &vetor[j-1]);
    }
}