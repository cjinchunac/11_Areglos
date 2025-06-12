#include <iostream>
using namespace std;
int main () {
    int n, aux, A[20];
    cout<<"Vamos a intercambiar elementos equidistantes de un arreglo"<<endl;
    cout<<"Ingrese la cantidad de numeros a ingresar"<<endl;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>A[i];
    }
    for(int i=0;i<n/2;i++) {
        aux=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=aux;
    }
    cout<<"El nuevo arreglo es: "<<endl;
    for(int i=0;i<n;i++) {
        cout<<A[i]<<", ";
    }
    return 0;
}