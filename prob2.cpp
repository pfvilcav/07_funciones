#include<iostream>
using namespace std;

int divYres(int dividendo, int divisor) {
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
    int NUM1, NUM2, MAYOR, MENOR;
    cout<<"Ingrese un numero: ";
    cin>>NUM1;
    if (NUM1<=0) {
        cout<<"El valor debe ser mayor que cero...";
        return 0;
    }
    cout<<"Ingrese otro numero: ";
    cin>>NUM2;
    if (NUM2<=0) {
        cout<<"El valor debe ser mayor que cero...";
        return 0;
    }
    if( NUM1>NUM2) {
        MAYOR=NUM1;
        MENOR=NUM2;
    }
    else {
        MAYOR=NUM2;
        MENOR=NUM1;
    }
    cout<<"Se elegira al mayor como dividendo y el menor como divisor: "<<endl<<MAYOR<<"/"<<MENOR<<endl;
    cout<<"El residuo y el cociente, respectivamente, son los siguientes: "<<endl;
    cout<<divYres(MAYOR, MENOR);
    return 0;
}
