#include<iostream>
using namespace std;

int factorial(int n) {
    int res=1;
    for (int i=1; i<=n; i++) {
        res=res*i;
    }
    return res;
}

int main() {
    int m,n;
    cout<<"Combinatoria de:"<<endl;
    cin>>m;
    if (m<=0) {
        cout<<"El numero debe ser mayor que cero...";
        return 0;
    }
    cout<<"en:"<<endl;
    cin>>n;
    if (m>=n) {
        cout<<"La operacion queda asi: "<<endl;
        cout<<endl;
        cout<<"    "<<m<<"!"<<endl;
        cout<<"----------"<<endl;
        cout<<n<<"!"<<"("<<m<<" - "<<n<<")"<<"!"<<endl;
        cout<<endl;
        cout<<"y es igual a:"<<endl<<factorial(m)/(factorial(n)*factorial(m-n));
    }
    else {
        cout<<"El primer numero debe ser mayor o igual al segundo...";
    }
    return 0;
}