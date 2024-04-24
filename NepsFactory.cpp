#include <stdio.h>
#include <iostream>
#include <algorithm>

class Pilhas{
    int a, b, c;
public: 

    Pilhas(int a, int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }

    int get_a(){ return a; }

    int get_b(){ return b; }

    int get_c(){ return c; }

    void remover_caixas(int a, int b, int c){
        this->a = this->a - a > 0 ? this->a - a : 0;
        this->b = this->b - b > 0 ? this->b - b : 0;
        this->c = this->c - c > 0 ? this->c - c : 0;        
    }

    bool todas_vazias(){
        if (this->a == 0 and this->b == 0 and this->c == 0){
            return true;
        }

        return false;
    }
};

class Robo {
protected:
    bool completou;
public:
    bool completou_tarefa(){ return this->completou; }
    virtual void operar(Pilhas &P)=0;
};

int func(int x){
    if(x%3)
        return (x/3 + 1);
    return x/3;
}

int main(){
int a, b, c;
    cin >> a >> b >> c;

    // Calcule o número máximo de caixas em qualquer pilha, que é o número de operações necessárias para o Modelo A completar a tarefa.
    int A = max({a, b, c});

    // Calcule o número total de operações necessárias para o Modelo B completar a tarefa.
    int B = func(a) + func(b) + func(c);

    // Compare esses dois números e imprima o resultado.
    if(A < B)
        cout << "MODELO A";
    else if(B < A)
        cout << "MODELO B";
    else
        cout << "EMPATE";

    return 0;

}
