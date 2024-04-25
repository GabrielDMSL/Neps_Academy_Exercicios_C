#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(){
    int N;
    double Numeros[1000];
    double raiz_quadrada = sqrt(N);
    cin >> N;

    cout.precision(4);
    cout.setf(ios::fixed);

    for(int i=0; i<N; i++){
        cin >> Numeros[i];
    }
    for(int i=0; i<N; i++){
        cout << sqrt(Numeros[i]) << endl;
    }
}