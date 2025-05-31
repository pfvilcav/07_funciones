#include<iostream>
using namespace std;

bool esPrimo(int n) {
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
        if (esPrimo(NUM)) {
           cout<<"El numero "<<NUM<<" es primo.";
        }
        else {
           cout<<"El numero "<<NUM<<" no es primo.";
        }
    }
    else {
        cout<<"El valor a ingresar debe ser mayor que uno.";
    }
    return 0;
}
