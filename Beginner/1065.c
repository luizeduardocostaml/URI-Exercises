#include <stdio.h>
#include <string.h>

int main(){
    int n[5];
    int i, par=0;

    for(i=0;i<5;i++){
        scanf("%d", &n[i]);
        if(n[i]%2 == 0) par++;
    }

    printf("%d valores pares\n", par);

    return 0;
}
