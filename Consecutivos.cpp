#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int N;
int Numero[100020];

int main(){
    cin >> N;

    int contador = 0, resposta = 0, anterior = Numero[1]; //Declaramos que o contador e a resposta comecam zerados e que o início do array é 1.
    for( int i=0; i<N; i++){
        cin >> Numero[i]; // Lemos o numero de sequencia e guardamos no array.
        if(Numero[i] == anterior){ // Verifica se o numero atual é igual ao anterior, se sim adiciona no contado +1;
            contador ++;
        }else{
            contador = 1;   //Encontramos um novo numero entao resetamos o contador para 1;
            anterior = Numero[i]; // adicionamos o novo numero para o array.
        }
        resposta = max(resposta, contador); // atualiza a resposta para o max entre a atual e contador.
    }

    resposta = max(resposta, contador);  // verificamos se há repeticoes
    cout << resposta << endl;  // retornamos o valor max da resposta.
}