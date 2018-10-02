#include <iostream>
using namespace std;

//Crea un programa que permita el ingreso de n elemenetos a un array e imprima el array

int main()
{
    int n;
    cout << "Ingrese el numero de elementos" << endl;
    cin >> n;
    int array[n];
    cout <<"Digite los elementos del array"<<endl;
    for (int i=0;i<n;i++)
        cin >> array[i];
    for (int i=0;i<n;i++)
        cout<< array[i];
return 0;
}
