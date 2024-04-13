#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, acesso, soma=0, dias=0;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d", &acesso);
        soma += acesso;

        if (soma >= 1000000){
            dias = i+1;
            break;

        }
    }

    printf("%d", dias);

    return 0;
}