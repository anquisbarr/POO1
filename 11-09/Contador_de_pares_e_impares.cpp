#include <iostream>
using namespace std;
int main(){
    int num;
    int pares=0,impares=0,sum_num=0;
    while(num != 0){
        cout << "Ingrese el numero"<<endl;
        cin>> num;
        if (num%2==0){
            pares++;
        }
        if (num%2 !=0){
            impares++;
        }
    }
    sum_num=pares+impares-1;
    cout << "Numeros leidos: " << sum_num << endl;
    cout << "Los numeros pares son "<<pares-1<<endl;
    cout <<"Los numeros impares son "<<impares<<endl;

}
