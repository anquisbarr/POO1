/Ejercico 2
#include <iostream>
using namespace std;
int main(){
    float radianes, resultado;
    const double pi=3.1415;
    cout << "Ingrese el ángulo en radianes:"<<endl;
    cin >> radianes;
    cout << "Convertido a sexagesimal:" <<endl<<radianes*180/pi;
}
