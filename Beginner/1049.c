#include <stdio.h>
 
int main() {
 
    char palavra1[20], palavra2[20], palavra3[20];

    scanf("%s", &palavra1);
    scanf("%s", &palavra2);
    scanf("%s", &palavra3);

    if(strcmp(palavra1, "vertebrado") == 0){
        if(strcmp(palavra2, "ave") == 0){
            if(strcmp(palavra3, "carnivoro") == 0){
                printf("aguia\n");
            }
            if(strcmp(palavra3, "onivoro") == 0){
                printf("pomba\n");
            }
        }
        if(strcmp(palavra2, "mamifero") == 0){
            if(strcmp(palavra3, "onivoro") == 0){
                printf("homem\n");
            }
            if(strcmp(palavra3, "herbivoro") == 0){
                printf("vaca\n");
            }
        }
    }
    if(strcmp(palavra1, "invertebrado") == 0){
        if(strcmp(palavra2, "inseto") == 0){
            if(strcmp(palavra3, "hematofago") == 0){
                printf("pulga\n");
            }
            if(strcmp(palavra3, "herbivoro") == 0){
                printf("lagarta\n");
            }
        }
        if(strcmp(palavra2, "anelideo") == 0){
            if(strcmp(palavra3, "hematofago") == 0){
                printf("sanguessuga\n");
            }
            if(strcmp(palavra3, "onivoro") == 0){
                printf("minhoca\n");
            }
        }
    }
 
    return 0;
}