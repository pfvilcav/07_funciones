#include<iostream>
using namespace std;

int factorial(int n) {
    int RESUL=1;
    for(int i=1; i<=n; i++) {
        RESUL=RESUL*i;
    }
    return RESUL;
}

int denominador(int n) {
    return 2*n;
}

float suma(int n) {
    float SUMA=0;
    for (int i=1; i<=n; i++) {
        float NUM=factorial(i);
        float DEN=denominador(i);
        SUMA=SUMA+(NUM/DEN);
    }
    return SUMA;
}

int main() {
    int n;
    cout<<"Ingrese la cantidad de terminos de la serie: ";
    cin>>n;
    if (n>0) {
        cout<<"El resultado de la serie es: "<<endl<<suma(n);
    }
    else {
        cout<<"El valor ingresado no es valido. Debio ingresar un valor mayor que 0...";
    }
    return 0;
}