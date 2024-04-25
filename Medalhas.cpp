#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int T1, T2, T3;
    cin >> T1 >> T2 >> T3;

    if(T1 < T2 and T2 < T3){
		cout<<"1\n";
		cout<<"2\n";
		cout<<"3\n";
	}
	if(T1 < T3 and T3 < T2){
		cout<<"1\n";
		cout<<"3\n";
		cout<<"2\n";
	}
	if(T2 < T1 and T1 < T3){
		cout<<"2\n";
		cout<<"1\n";
		cout<<"3\n";
	}
	if(T2 < T3 and T3 < T1){
		cout<<"2\n";
		cout<<"3\n";
		cout<<"1\n";
	}
	if(T3 < T1 and T1 < T2){
		cout<<"3\n";
		cout<<"1\n";
		cout<<"2\n";
	}
	if(T3 < T2 and T2 < T1){
		cout<<"3\n";
		cout<<"2\n";
		cout<<"1\n";
    }

}

