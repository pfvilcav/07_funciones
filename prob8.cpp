#include<iostream>
using namespace std;

int calcularMCD(int A, int B) {
    int res, cociente;
    while (A%B!=0) {
        cociente=A/B;
        res=A%B;
        A=B;
        B=res;
    }
    return B;
}

int main() {
    int A, B, MAYOR, MENOR;
    cout<<"Ingrese un numero: ";
    cin>>A;
    cout<<"Ingrese otro numero: ";
    cin>>B;
    if (A>B) {
        MAYOR=A;
        MENOR=B;
    }
    else {
        MAYOR=B;
        MENOR=A;
    }
    cout<<"El maximo comun divisor de "<<MAYOR<<" y "<<MENOR<<" es: "<<endl;
    cout<<calcularMCD(MAYOR, MENOR)<<endl;
    cout<<"El minimo comun multiplo de "<<MAYOR<<" y "<<MENOR<<" es: "<<endl;
    cout<<(MAYOR*MENOR)/calcularMCD(MAYOR, MENOR);
}