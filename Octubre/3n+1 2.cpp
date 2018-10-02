#include<iostream>
using namespace std;
void swap(int &a,int&b){
	a^=b;
	b^=a;
	a^=b;
}
int algo(int n){
	int seq=0;
	while(n!=1){
		if(n%2){
			n=n*3+1;
		}else{
			n=n>>1;
		}
		seq++;
	}
	return seq+1;
}
int main()
{
    int li,ls;
	int max;
	int tmp;
	bool aux;
	while(cin>>li>>ls){
		aux=false;
		if(li>ls){
			swap(li,ls);
			aux=true;
		}

		max=algo(ls);
		for(int i=li;i<ls;i++){
			tmp=algo(i);
			max= max<tmp ? tmp:max;
		}
		if(aux) swap(li,ls);
		cout<<li<<" "<<ls<<" "<<max<<endl;
		
	}
    return 0;
}
