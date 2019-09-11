#include <stdio.h>
#include <string.h>

int main(){
    int a, b, c, d, tempo;
    int hora, minuto;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if( a == c && b == d){
        hora = 24;
        minuto = 0;
    }else{
        if( a >= c){
            tempo = ((24-a) + c)*60;
            if(tempo == 1440) tempo = 0;
            if(tempo == 60 && b > d) tempo = 0;
            if(d < b) tempo += (60-b) + d;
            else tempo += (d-b);
        }else{
            tempo = (c-a)*60;
            if(tempo == 1440) tempo -= 60;
            if(tempo == 60 && b > d) tempo = 0;
            if(d < b) tempo += (60-b) + d;
            else tempo += (d-b);
        }
        hora = tempo/60;
        minuto = tempo%60;
    }


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);

    return 0;
}
