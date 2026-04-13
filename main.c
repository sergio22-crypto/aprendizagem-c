#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
    StackPtr pilha = stack_criar(3);
    
    stack_push(pilha, 10);
    stack_push(pilha, 20);
    stack_push(pilha, 30);
    stack_push(pilha, 40);  // pilha cheia - deve dar erro
    
    printf("Topo: %d\n", stack_pop(pilha));  // 30
    printf("Topo: %d\n", stack_pop(pilha));  // 20
    printf("Topo: %d\n", stack_pop(pilha));  // 10
    printf("Topo: %d\n", stack_pop(pilha));  // vazia - deve dar erro
    
    stack_destruir(&pilha);
    return 0;
}