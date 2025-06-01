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
    cout<<"en:"<<endl;
    cin>>n;
    cout<<factorial(m)/(factorial(n)*factorial(m-n));
    return 0;
}