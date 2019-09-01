#include <iostream>
#include <stdio.h>
#include <math.h>
 
using namespace std;
 
int main() {
 
    int D;
    float G, KM;
    scanf("%d", &D);
    scanf("%f", &G);
    KM = (D / G);
    printf("%.3f km/l\n", KM);
 
    return 0;
}