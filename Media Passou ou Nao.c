#include <stdio.h>

int main(){
    float a, b, media;

    scanf("%f%f", &a, &b);
    media = (a+b)/2;

    if(media >= 7){
        printf("O aluno esta aprovado\n");
    }
    else{
        printf("O aluno esta reprovado");
    }

    return 0;
}