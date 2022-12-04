#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "lista.c"

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
