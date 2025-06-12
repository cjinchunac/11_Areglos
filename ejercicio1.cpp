#include <iostream>
using namespace std;
int main () {
    int n, max, A[20];
    cout<<"Ingrese la cantidad de numeros a ingresar"<<endl;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>A[i];
    }
    max=A[0];
    for(int i=1;i<n;i++) {
        if (A[i]>max)
            max=A[i];
    }
    cout<<"El numero mayor de los numeros ingresados es: "<<max;
    return 0;
}