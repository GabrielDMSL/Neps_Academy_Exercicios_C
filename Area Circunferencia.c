#include <stdio.h>

int main(){
    float R, area, pi=3.1416;
    scanf("%f", &R);
    area = (R*R)*pi;

    printf("%.2f\n", area);
}