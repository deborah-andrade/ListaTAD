#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


struct lista {
    int quant;
    int vet[MAX];
};


Lista *criar() {
    Lista *l;
    l = (Lista *) malloc(sizeof(Lista));
    if (l != NULL) {
        l->quant = 0;
    }

    return l;
}

void append(Lista *l, int valor) {
    l->vet[l->quant] = valor;
    l->quant++;
}

int get(Lista *l, int index) {
    return l->vet[index];
}

void remover(Lista *l, int index){
        for (int i = index; i < l->quant - 1; i++){
        l->vet[i] = l->vet[i + 1];
    }
    l->quant--;
    }


void insert(Lista *l, int valor) {
    for (int i = l->quant - 1; i >= 0; i--) {
        l->vet[i + 1] = l->vet[i];
    }
    l->vet[0] = valor;
    l->quant++;

}

void insert_sort(Lista *l, int valor) {
    int i, j, x;

    for (i = l->quant - 1; i >= 0; i--) {
        l->vet[i + 1] = l->vet[i];
    }
    l->vet[0] = valor;
    l->quant++;

    for(i = 1; i < valor; i++) {
    x = l->vet[i];
    j = i - 1;
    while(j >= 0 && l->vet[j] > x) {
        l->vet[j+1] = l->vet[j];
        j--;
        }
        l->vet[j+1] = x;
    }
}

int full(Lista *l){
    if(l->quant == MAX){
        printf("\nA lista esta cheia!");
    }
    return 0;
}


int empty(Lista *l){
    if (l->quant == 0){
        printf("\nA lista esta vazia!");
        }
    return 0;
    }
        

int size(Lista *l){
    return l->quant;
}

void print(Lista *l){
        for (int i = 0; i < l->quant; i++) {
        printf("%d ", l->vet[i]);
    }
}



int main(){
    Lista *lista;
    lista = criar();
    append(lista, 1);
    append(lista, 2);
    insert(lista, 3);
    insert(lista, 4);
    printf("A lista estando de forma ordenada: ");
    insert_sort(lista, 5);
    print(lista);
    printf("\n");
    remover(lista, 4);
    print(lista);
    printf("\nO valor do indice que deseja encontrar e: %d\n", get(lista, 2));
    full(lista);
}
