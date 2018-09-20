#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cout<<"Ingrese el tamaño de la piramide";
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<"*";
            cout<<"\n";
    }
}
