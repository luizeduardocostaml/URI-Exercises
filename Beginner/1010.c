#include <iostream>
#include <stdio.h>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double V1, V2, T;
    int N1, N2, Q1, Q2;
    scanf("%d %d %lf", &N1, &Q1, &V1);
    scanf("%d %d %lf", &N2, &Q2, &V2);
    T = (Q1 * V1)+(Q2 * V2);
    printf("VALOR A PAGAR: R$ %.2lf\n", T);
 
    return 0;
}