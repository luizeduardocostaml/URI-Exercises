#include <stdio.h>
 
int main() {
 
    float n;

    scanf("%f", &n);

    if(n <= 400){
        printf("Novo salario: %.2f\n", n*1.15);
        printf("Reajuste ganho: %.2f\n", n*0.15);
        printf("Em percentual: 15 %%\n");
    }
    if(n > 400 && n <= 800){
        printf("Novo salario: %.2f\n", n*1.12);
        printf("Reajuste ganho: %.2f\n", n*0.12);
        printf("Em percentual: 12 %%\n");
    }
    if(n > 800 && n <= 1200){
        printf("Novo salario: %.2f\n", n*1.10);
        printf("Reajuste ganho: %.2f\n", n*0.10);
        printf("Em percentual: 10 %%\n");
    }
    if(n > 1200 && n <= 2000){
        printf("Novo salario: %.2f\n", n*1.07);
        printf("Reajuste ganho: %.2f\n", n*0.07);
        printf("Em percentual: 7 %%\n");
    }
    if( n > 2000){
        printf("Novo salario: %.2f\n", n*1.04);
        printf("Reajuste ganho: %.2f\n", n*0.04);
        printf("Em percentual: 4 %%\n");
    }
 
    return 0;
}