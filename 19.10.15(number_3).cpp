#include <iostream>
#include <cmath>
using namespace std;
bool f(double &a){
	double *b;
	b=&a;
	if(*b>=0){
		*b=sqrt(*b);
		cout<<&a<<" "<<b<<" "<<*b;
		return true;
	}else{
		return false;
	}
}
int main(){
	double a;
	for(int i=0;i<3;i++){
		cin>>a;
		cout<<f(a)<<" "<<a;
	}
}
