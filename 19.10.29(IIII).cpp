#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
double f(int a,int x){
	double sl=0,s=1;
	int i=1,si=0;
	while(s>=sl){
		si*=i;
		sl=s;
		s+=(pow(3.,i*1.)+pow(x*1.,i+0.))/(si+0.);
		++i;
	}
	return s;
}
int main(){
	int n,x;
	cin>>n>>x;
	cout<<f(n,x);
}
