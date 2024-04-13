#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, B, soma;
    scanf("%d", &A);
    scanf("%d", &B);
    soma = (A+B);

    if(soma%2 == 0){
        printf("Bino\n");
    }else{
        printf("Cino\n");
    }
}