#include <iostream>
using namespace std;
int main () {
    int n, aux, A[20];
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>A[i];
    }
    for(int i=0;i<n/2;i++) {
        aux=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=aux;
    }
    for(int i=0;i<n;i++) {
        cout<<A[i]<<", ";
    }
    return 0;
}