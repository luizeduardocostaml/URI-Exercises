#include <stdio.h>
#include <string.h>

int main(){
    double a, b, c, aux;

    scanf("%lf %lf %lf", &a, &b, &c);

    if( b > a && b > c){
        aux = b;
        b = a;
        a = aux;
    }
    if( c > a && c > b){
        aux = c;
        c = a;
        a = aux;
    }
    if( a >= (b+c)) printf("NAO FORMA TRIANGULO\n");
    else{
        if((a*a) == ((b*b)+ (c*c))) printf("TRIANGULO RETANGULO\n");
        if((a*a) > ((b*b) + (c*c))) printf("TRIANGULO OBTUSANGULO\n");
        if((a*a) < ((b*b) + (c*c))) printf("TRIANGULO ACUTANGULO\n");
        if( a == b && a == c) printf("TRIANGULO EQUILATERO\n");
        if((a == b && b != c) || (a == c && c != b) || (c == b && b != a)) printf("TRIANGULO ISOSCELES\n");
    }



    return 0;
}
