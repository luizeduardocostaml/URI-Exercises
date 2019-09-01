#include <iostream>
#include <stdio.h>
#include <math.h>
 
using namespace std;
 
int main() {
 
    long n;
    int n100, n50, n20, n10, n5, n2;
    scanf("%d", &n);
    printf("%d\n", n);
    n100 = ceil(n/100);
    n = fmod(n, 100);
    n50 = ceil(n/50);
    n = fmod(n, 50);
    n20 = ceil(n/20);
    n = fmod(n, 20);
    n10 = ceil(n/10);
    n = fmod(n, 10);
    n5 = ceil(n/5);
    n = fmod(n,5);
    n2 = ceil(n/2);
    n = fmod(n,2);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n);
 
    return 0;
}