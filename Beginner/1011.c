#include <iostream>
#include <stdio.h>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double R, V;
    scanf("%lf", &R);
    V = (4.0/3) * 3.14159 * (R * R * R);
    printf("VOLUME = %.3lf\n", V);
 
    return 0;
}