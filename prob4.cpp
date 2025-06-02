#include<iostream>
using namespace std;

int esPerfecto(int n) {
    int resul=0;
    for (int i=2; i<=n; i++) {
        if (n%i==0) {
            resul=resul+(n/i);
        }
    }
    
    return resul;
}

int main() {
    int NUM;
    cout<<"Ingrese el numero a verificar si es perfecto:"<<endl;
    cin>>NUM;
    if (NUM>1) {
        if (esPerfecto(NUM)==NUM) {
            cout<<"El numero es perfecto.";
        }
        else {
            cout<<"El numero no es perfecto.";
        }
    }
    else {
        cout<<"Debe ingresar un numero mayor que uno...";
    }
    return 0;
}