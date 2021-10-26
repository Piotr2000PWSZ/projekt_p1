#include<iostream>

using namespace std;

int main() {

	float x,a,b;
	cout<<"podaj b ::  ", cin>>b, cout<<"podaj a ::  ", cin>> a;
	if(a==0) cout<<"a musi byc a/=0 podaj a ::  ", cin>> a;
	x=-b/a, cout<<"miejsce zerowe to "<< x ;
}

