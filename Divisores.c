#include <stdio.h>
#include <stdlib.h>

int main(){
    int X;
    scanf("%d", &X);

    for(int i = 1; i <= X; i++){
        if(X % i == 0){
            printf("%d ", i);
        }
    }

    return 0;
}