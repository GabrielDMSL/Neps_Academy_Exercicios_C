#include <stdio.h>
#include <stdlib.h>

int main(){
    float A, B, media;
    scanf("%f %f", &A, &B);
    media = (A+B)/2;

    if(media >7){
        printf("Aprovado\n");
    }else if(media<4){
        printf("Reprovado\n");
    }else{
        printf("Recuperacao");
    }
}