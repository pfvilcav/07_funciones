#include<iostream>
using namespace std;

int fibonacci(int x) {
    int RESULTADO=0, B=1, C, SUMA=0;
    cout<<"LA SERIE ES: ";
    for(int i=0; i<x; i++) {
        C=RESULTADO+B;
        RESULTADO=B;
        B=C;
        SUMA=SUMA+RESULTADO;
        cout<<RESULTADO<<" ";
    }
    cout<<"LA SUMA ES: "<<SUMA;
    return 1;
}

int main() {
    int num;
    cin>>num;
    fibonacci(num);
    return 0;
}