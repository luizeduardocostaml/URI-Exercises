#include <iostream>
#include <stdio.h>
#include <math.h>
 
using namespace std;
 
int main() {
 
    int H, VEL;
    double GAS;
    scanf("%d", &H);
    scanf("%d", &VEL);
    GAS = ((float)(H*VEL) / 12);
    printf("%.3lf\n", GAS);
 
    return 0;
}