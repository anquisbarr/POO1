#include <iostream>
using namespace std;

// n > 4 y suma los elementos de la cuarta columna

int main(){
int n,suma=0;
cout<<"Ingrese n, siempre y cuando sea mayor a 4"<<endl;
cin>>n;
int array[n][n];
if (n>4){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cin>>array[i][j];
    }
    for(int i=0;i<n;i++){
    cout<<endl;
        for(int j=0;j<n;j++){
            cout.width(3);
            cout<<array[i][j];
            if(j==3)
                suma+=array[i][j];
         
        }
    }
    cout<<endl<<suma;  
  }else{
    cout<<"Dato menor o igual a 4";
  }
}
