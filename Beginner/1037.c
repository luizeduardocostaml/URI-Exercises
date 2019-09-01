#include <iostream>
 
using namespace std;
 
int main() {
 
    float numero;
    scanf("%f", &numero);

    if(numero > 100 | numero < 0){
        printf("Fora de intervalo\n");
    }
    if(numero >= 0 & numero <= 25){
        printf("Intervalo [0,25]\n");
    }
    if(numero > 25 & numero <= 50){
        printf("Intervalo (25,50]\n");
    }
    if(numero > 50 & numero <= 75){
        printf("Intervalo (50,75]\n");
    }
    if(numero > 75 & numero <= 100){
        printf("Intervalo (75,100]\n");
    }
 
    return 0;
}