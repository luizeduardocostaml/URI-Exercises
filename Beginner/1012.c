#include <iostream>
#include <stdio.h>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double A, B, C, TG, CIR, TP, QD, RET;
    scanf("%lf %lf %lf", &A, &B, &C);
    TG = (A * C)/2;
    CIR = (3.14159 *(C * C));
    TP = (C *(A + B)/2);
    QD = (B * B);
    RET = (A * B);
    printf("TRIANGULO: %.3lf\n", TG);
    printf("CIRCULO: %.3lf\n", CIR);
    printf("TRAPEZIO: %.3lf\n", TP);
    printf("QUADRADO: %.3lf\n", QD);
    printf("RETANGULO: %.3lf\n", RET);
 
    return 0;
}