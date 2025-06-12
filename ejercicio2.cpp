#include <iostream>
using namespace std;
int main () {
    float n, s, prom;
    int A[20];
    s=0;
    cout<<"Ingrese la cantidad de numeros a ingresar"<<endl;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>A[i];
        s=s+A[i];
    }
    prom=s/n;
    cout<<"El promedio de los numeros ingresados es: "<<prom;
    cout<<endl<<"Los numeros mayores al promedio son"<<endl;
    for(int i=0;i<n;i++) {
        if (A[i]>prom)
            cout<<A[i]<<", ";
    }
    return 0;
}