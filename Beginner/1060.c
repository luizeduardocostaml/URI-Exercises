#include <stdio.h>
 
int main() {
 
    int contador=0,i;
    float n;
    for(i=0;i< 6;i++){
        scanf("%f", &n);
        if(n > 0) contador++;
    }

    printf("%d valores positivos\n", contador);
 
    return 0;
}