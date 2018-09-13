#include <iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    while (year!=0){
        if(year%4==0 && year%100!=0 || year%400==0){
            cout <<"Bisiesto";
            break;
        }else{
            cout <<"No es Bisiesto";
            break;
        }}
    return 0;
}
