#include<iostream>
using namespace std;

int primo(int n) {
    for (int i=2; i*i<=n; i++) {
        if (n%i==0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int NUM;
    cout<<"Ingrese el numero a verificar si es primo."<<endl;
    cin>>NUM;
    if (NUM>1) {
        if (primo(NUM)) {
           cout<<"Es primo.";
        }
        else {
           cout<<"No es primo.";
        }
    }
    else {
        cout<<"El valor a ingresar debe ser positivo y distinto de uno.";
    }
    return 0;
}
