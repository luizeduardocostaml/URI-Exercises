#include <iostream>
#include <stdio.h>
#include <math.h>
 
using namespace std;
 
int main() {
 
    int n, min, hr;
    scanf("%d", &n);
    hr = ceil(n/3600);
    n = fmod(n, 3600);
    min = ceil(n/60);
    n = fmod(n, 60);
    printf("%d:%d:%d\n", hr, min, n);
 
    return 0;
}