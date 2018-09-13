#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int numero,a;
  cout << " Numero "; 
  cin >> numero;
  for (int i=0;i<=numero;i++){
    a= pow(2,i);
    if(a>numero){
      break;
      }
}
cout<<a/2;
return 0;
}
