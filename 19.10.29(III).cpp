#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
double f(int a,int x){
	double s=0;
	int si=0;
	for(int i=1;i<=a;++i){
		si*=i;
		s+=(pow(3.,i*1.)+pow(x*1.,i+0.))/(si+0.);
	}
	return s;
}
int main(){
	int n,x;
	cin>>n>>x;
	cout<<f(n,x);
}
