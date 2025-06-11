#include <iostream>
using namespace std;
int main () {
    int n, s, prom, A[20];
    s=0;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>A[i];
        s=s+A[i];
    }
    prom=s/n;
    for(int i=0;i<n;i++) {
        if (A[i]>prom)
            cout<<A[i]<<", ";
    }
    return 0;
}