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

int calcularMCM(int A, int B, int MCD) {
    return ((A*B)/MCD);
}

int main() {
    int A, B, MAYOR, MENOR;
    cout<<"Ingrese un numero: ";
    cin>>A;
    if(A<0) {
        cout<<"Los valores deben ser mayores que 0...";
        return 0;
    }
    
    cout<<"Ingrese otro numero: ";
    cin>>B;
    if(B<0) {
        cout<<"Los valores deben ser mayores que 0...";
        return 0;
    }
    
    if (A>B) {
        MAYOR=A;
        MENOR=B;
    }
    else {
        MAYOR=B;
        MENOR=A;
    }
    cout<<"El maximo comun divisor(MCD) de "<<MAYOR<<" y "<<MENOR<<" es: "<<endl;
    cout<<calcularMCD(MAYOR, MENOR)<<endl;
    cout<<"El minimo comun multiplo(MCM) de "<<MAYOR<<" y "<<MENOR<<" es: "<<endl;
    cout<<calcularMCM(MAYOR, MENOR, calcularMCD(MAYOR, MENOR));
    return 0;
}