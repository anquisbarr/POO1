#include "string"
#include <iostream>

#include "boost/algorithm/string.hpp"

using namespace std;
using namespace boost;
int main(){
    string s("longstring");
    string t("long");
    bool b = contains(s, t);
    cout << b << endl;
    if (b==1)
    cout<<"La cadena 1 : '"<<t <<" ' esta incluida en la cadena 2 :  '"<<s<<" '"<<endl;
    else{
        cout<<"Las cadenas NO estan relacionadas";
        }
    return 0;
}
