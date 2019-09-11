#include <stdio.h>
#include <string.h>

int main(){
    int n,i;

    scanf("%d", &n);

    int vet[n];

    for(i=0;i<n;i++){
        scanf("%d", &vet[i]);
        if(vet[i] == 0) printf("NULL\n");
        else{
            if(vet[i]%2 == 0)printf("EVEN");
            else printf("ODD");
            if(vet[i] > 0)printf(" POSITIVE\n");
            else printf(" NEGATIVE\n");
        }
    }

    return 0;
}
