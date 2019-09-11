#include <stdio.h>
#include <string.h>

int main(){
    float n[6], media=0;
    int i, pos=0;

    for(i=0;i<6;i++){
        scanf("%f", &n[i]);
        if(n[i] >0) {
            pos++;
            media += n[i];
        }

    }
    media = media / pos;

    printf("%d valores positivos\n", pos);
    printf("%.1f\n", media);

    return 0;
}
