#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
double f(int a,int x){
	double s;
	for(int i=0;i<a;++i){
		s+=1./pow(1.*x,(i+1.));
	}
	return s;
}
int main(){
	int n,x;
	cin>>n>>x;
	cout<<f(n,x);
}
