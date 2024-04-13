#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, M, soma;
    scanf("%d %d", &A, &M);

    soma = (A+M);

    if(soma <= 50){
        printf("S");
    }else if(soma > 50){
        printf("N");
    }

}