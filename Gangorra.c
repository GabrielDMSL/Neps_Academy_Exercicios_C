#include <stdio.h>
#include <stdlib.h>

int main(){
    int P1, C1, P2, C2, soma1, soma2;
    scanf("%d %d %d %d", &P1, &C1, &P2, &C2 );

    soma1 = (P1*C1);
    soma2 = (P2*C2);

    if(soma1 > soma2){
        printf("-1\n");
    }else if(soma1 == soma2){
        printf("0\n");
    }else{
        printf("1\n");
    }

}