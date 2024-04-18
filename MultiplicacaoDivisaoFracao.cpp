#include <stdio.h>

class Fracao{
public:
    int numerador, denominador;

    Fracao(){}

    Fracao(int numerador, int denominador){
        this->numerador = numerador;
        this->denominador = denominador;
    }

    //TODO: Implemente o operador de multiplicação.
    Fracao operator * (Fracao b){
        Fracao multiplicador;

        multiplicador.numerador = this->numerador * b.numerador;
        multiplicador.denominador = this->denominador * b.denominador;

        return multiplicador;
    }
    
        //TODO: Implemente o operador de divisão.
    Fracao operator / (Fracao b){

        Fracao divisao;
        divisao.numerador = this->numerador * b.denominador;
        divisao.denominador = this->denominador * b.numerador;
        
        return divisao;
    }


};

int main(){
    Fracao a, b, c;
    char op;

    scanf("%d %d", &a.numerador, &a.denominador);
    scanf("%d %d", &b.numerador, &b.denominador);
    scanf(" %c", &op);

    if(op == 'M'){
        c = a * b;
    } else if(op == 'D'){
        c = a / b;
    }

    printf("%d %d", c.numerador, c.denominador);
}