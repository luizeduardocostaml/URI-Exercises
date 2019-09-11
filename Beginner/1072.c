#include <stdio.h>
#include <string.h>

int main(){
    int n,i, in=0, out=0;

    scanf("%d", &n);

    int vet[n];

    for(i=0;i<n;i++){
        scanf("%d", &vet[i]);
        if(vet[i] < 10 || vet[i] > 20) out++;
        else in++;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
