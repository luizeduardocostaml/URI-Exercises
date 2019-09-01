#include <iostream>
#include <stdio.h>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double raio, area;
    scanf ("%lf", &raio);
    area = 3.14159 * (raio * raio);
    printf ("A=%.4lf\n", area);
 
    return 0;
}