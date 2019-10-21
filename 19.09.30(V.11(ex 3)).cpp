#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double ans(double x){
	if(x-2<=0){
		return 0;//как прервать функцию
	}
	return log(x/(x-2));
}
int main(){
	setlocale(LC_ALL,"rus");
	double a,b,h;
	cout<<"Введите отрезок и шаг ";
	cin>>a>>b>>h;
	for(double i=a;i<=b;i+=h){
		if(ans(i)==0){
			cout<<fixed<<setprecision(10)<<i<<": "<<"Невозможно вычислить"<<"\n";
		}else{
			cout<<fixed<<setprecision(10)<<i<<": "<<ans(i)<<"\n";
		}
	}
}
