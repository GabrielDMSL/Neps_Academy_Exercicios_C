#include <iostream>
#include <algorithm>
using namespace std;

// Esta função calcula o número de operações necessárias para o Modelo B esvaziar uma pilha.
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


