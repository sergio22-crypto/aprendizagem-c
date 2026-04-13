#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct Stack {
    int *dados;
    int topo;
    int capacidade;
};

int stack_vazia(StackPtr s){
if (s->topo == -1){ 
    return 1;
    }
else
    return 0;
}

StackPtr stack_criar(int capacidade) {
    StackPtr s = (StackPtr)malloc(sizeof(struct Stack));
    s->dados = (int*)malloc(capacidade * sizeof(int));
    s->topo = -1;
    s->capacidade = capacidade;
    return s;
}

void stack_push(StackPtr s, int valor) {
    if (s->topo == s->capacidade -1){
        printf("[Erro]\n");
    }
    else {
        s->topo++;
        s->dados[s->topo] = valor;
    }
}

int stack_pop(StackPtr s){
    if (s->topo == -1){
        printf("Erro! Sem dados!\n");
        return -1;
    } 
   int valor = s->dados[s->topo];
    s->topo--;
    return valor;
}

void stack_destruir(StackPtr *s){
    free((*s)->dados);
    free(*s);
    *s = NULL;
}