#include <iostream>
#include <stdio.h>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double Salario, Vendas, T;
    char N[20];
    scanf("%s", &N);
    scanf("%lf", &Salario);
    scanf("%lf", &Vendas);
    T = Salario + (0.15 * Vendas);
    printf("TOTAL = R$ %.2lf\n", T);
 
    return 0;
}