#include <iostream>
#include <stdio.h>
#include <math.h>
 
using namespace std;
 
int main() {
 
    int H, N;
    float S, PH;
    scanf("%d", &N);
    scanf("%d", &H);
    scanf("%f", &PH);
    S = H * PH;
    printf("NUMBER = %d\n", N);
    printf("SALARY = U$ %.2f\n", S);
 
    return 0;
}