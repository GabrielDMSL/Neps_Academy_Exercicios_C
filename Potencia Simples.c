#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double x, y, potencia;
    scanf("%lf%lf", &x, &y);

    potencia = pow(x, y); /*Pow 'e usado para calcular a potencia*/
    printf("%.4lf", potencia);

    return 0;
}