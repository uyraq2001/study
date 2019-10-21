#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double ans(double x){
	if(x<0){
		return -4;
	}
	if(x>=1){
		return 2;
	}
	return x*x+3*x+4;
}
int main(){
	setlocale(LC_ALL,"rus");
	double a,b,h;
	cout<<"¬ведите отрезок и шаг ";
	cin>>a>>b>>h;
	for(double i=a;i<=b;i=i+h){
		cout<<fixed<<setprecision(10)<<i<<": "<<ans(i)<<"\n";
	}
}
