#include<iostream>
using namespace std;

int SerieFibonacci(int x) {
    int RESULTADO=0, B=1, C, SUMA=0;
    cout<<"LA SERIE ES: ";
    for(int i=0; i<x; i++) {
        C=RESULTADO+B;
        RESULTADO=B;
        B=C;
        SUMA=SUMA+RESULTADO;
        cout<<RESULTADO<<" ";
    }
    cout<<endl<<endl;
    return SUMA;
}

void CalcularSuma(int suma) {
    cout <<"LA SUMA ES: "<<suma<<endl;
}

int main() {
    int num, suma;
    cout<<"Ingrese la cantidad de terminos: "<<endl;
    cin>>num;
    cout<<endl;
    suma=SerieFibonacci(num);
    CalcularSuma(suma);
    return 0;
}