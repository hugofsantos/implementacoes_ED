#include "ordenacoes.h"
#include <stdio.h>
#include <stdlib.h>

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

unsigned int separacaoQuickSort(int* vetor, unsigned int n, unsigned int pivot){
    unsigned int pp = 0;
    unsigned int qq = n-1;

    while(pp < qq){
        while(vetor[pp]<=vetor[pivot] && pp < n-1) pp++;
        while(vetor[qq]>vetor[pivot]) qq--;

        if(pp < qq) trocarValores(&vetor[pp++], &vetor[qq--]);

        if(pp == pivot) return pp;
    }

    trocarValores(&vetor[pivot], &vetor[qq]);

    return qq;
}

void quickSort(int* vetor, unsigned int n, unsigned int pivot){
    if(n<=0) return;

    unsigned int meio = separacaoQuickSort(vetor, n, pivot);

    const unsigned int pivotMeio1 = (pivot * meio)/n;
    const unsigned int pivotMeio2 = (pivot * (n-1-meio))/n;

    quickSort(vetor, meio, pivotMeio1); // Ordena primeira metade do vetor separado
    quickSort(vetor + meio + 1, n-1-meio, pivotMeio2); // Ordena segunda metade do vetor separado
}

void juncaoMergeSort(int* vetor, unsigned int m, unsigned int n){
    unsigned int iTemp = 0; // Valor do índice atual do vetor temporário
    unsigned int iMet1 = 0; // Valor do índice atual da primeira metade do vetor
    unsigned int iMet2 = m; // Valor do índice atual da segunda metade do vetor

    int* tmp = (int*) malloc(sizeof(int) * n);

    while(iMet1 < m && iMet2 < n){
        if(vetor[iMet1] <= vetor[iMet2]) tmp[iTemp++] = vetor[iMet1++];
        else tmp[iTemp++] = vetor[iMet2++];
    }

    while(iMet1 < m) tmp[iTemp++] = vetor[iMet1++];
    while(iMet2 < n) tmp[iTemp++] = vetor[iMet2++];

    for(unsigned int i = 0; i < n; i++){
        vetor[i] = tmp[i];
    }

    free(tmp);
}

void mergeSort(int* vetor, unsigned int n){
    if(n <= 1) return;

    unsigned int meio = n/2;

    mergeSort(vetor, meio);
    mergeSort(vetor+meio, n-meio);

    juncaoMergeSort(vetor, meio, n);
}