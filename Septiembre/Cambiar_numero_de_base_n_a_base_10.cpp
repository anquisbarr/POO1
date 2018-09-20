#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    long int n,base,contador=0,base10=0;
    cout<<"Ingrese la base";
    cin>>base;
    cout<<"Ingrese el numero";
    cin >>n;
    while(n>0) {
        int r=n%10;
        n /= 10;
        base10 += r * pow(base,contador);
        contador++;
    }
    cout<<"El numero en base 10 es: "<<base10;
    return 0;
}
