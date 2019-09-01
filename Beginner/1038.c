#include <stdio.h>
 
int main() {
 
    int numero, quantidade;
    float valor;
    scanf("%d %d", &numero, &quantidade);

    if(numero == 1){
        valor = 4*quantidade;
        printf("Total: R$ %.2f\n", valor);
    }
    if(numero == 2){
        valor = 4.5*quantidade;
        printf("Total: R$ %.2f\n", valor);
    }
    if(numero == 3){
        valor = 5*quantidade;
        printf("Total: R$ %.2f\n", valor);
    }
    if(numero == 4){
        valor = 2*quantidade;
        printf("Total: R$ %.2f\n", valor);
    }
    if(numero == 5){
        valor = 1.5*quantidade;
        printf("Total: R$ %.2f\n", valor);
    }
 
    return 0;
}