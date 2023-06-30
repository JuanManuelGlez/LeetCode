#include <iostream>

using namespace std;

int main(){
	int n,a,b;
	
	cin>>n;
	//no es par
	if(n%2 and n>1){
		a=n-2;
		b=2;
	}
	else if(n%2==0 and n>1){
		a=n-1;
		b=1;
	}
	else{
		cout<<"invalid input"<<endl;
		a=0;
		b=0;
	}

	cout<<"a: "<<a<<" b: "<<b<<endl;
}
