#include<iostream>
using namespace std;

int division(int dividendo, int divisor) {
    int cociente=0, res;
    for (int i=1; dividendo-divisor>=0; i++) {
        res=dividendo-divisor;
        cociente++;
        dividendo=res;
    }
    cout<<res<<endl;
    return cociente;
}


int main() {
    int NUM1, NUM2, MAYOR;
    cout<<"Ingrese un numero: ";
    cin>>NUM1;
    cout<<"Ingrese otro numero: ";
    cin>>NUM2;
    if( NUM1>NUM2) {
        MAYOR=NUM1;
    }
    else {
        MAYOR=NUM2;
    }
    cout<<"El residuo y el cociente respectivamente son los siguientes: "<<endl;
    cout<<division(MAYOR, NUM2);
    return 0;
}
