#include <iostream>
using namespace std;
int f(int a){
	int f1;
	int f2=1;
	int f3=4;
	for(int i=0;i<a;++i){
		f1=f2;
		f2=f3;
		f3=f1+f2/2;
	}
	return f3;
}
int main(){
	int n;
	cin>>n;
	cout<<f(n);
	
}
