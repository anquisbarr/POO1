#include <iostream>
using namespace std;
int main(){
    long int number,x=0,numbersum=0;
    cin >> number;
    do{
        numbersum = numbersum + number % 10;
        number = number / 10;
        ++x;
    }while(x<=18);
    cout << numbersum;
    return 0;
}
