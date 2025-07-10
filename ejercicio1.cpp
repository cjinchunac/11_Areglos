#include <iostream>
using namespace std;
int main () {
    int n, max,min,op, A[20];
    cout<<"Ingrese la cantidad de numeros a ingresar"<<endl;
    cin>>n;
    for(int i=0;i<n;i++) {
    cout<<"ingrese el numero"<<endl;
    cin>>A[i];
    }
    do{
        system("cls");
        cout<<"que desea hacer con los numeros ingresados::::::::::::::::::"<<endl;
        cout<<"1.Calcular el numero mayor"<<endl;
        cout<<"2.Calcular el numero menor"<<endl;
        cout<<"0.Salir"<<endl;
        cin>>op;
        switch(op){
        case 1:
            max=A[0];
            for(int i=1;i<n;i++) {
            if (A[i]>max)
            max=A[i];
            }
            cout<<"El numero mayor de los numeros ingresados es: "<<max<<endl;
            system("pause");
            break;
        case 2:
            min=A[0];
            for(int i=1;i<n;i++) {
            if (A[i]<min)
            min=A[i];
            }
            cout<<"El numero menor de los numeros ingresados es: "<<min<<endl;
            system("pause");
            break;
        default :
            cout<<"saliendo..."<<endl;
            system("pause");
            break;
    }
    }while(op!=0);
    return 0;
}