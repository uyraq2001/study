#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double ans(double x){
	if(x-2<=0){
		return 0;//��� �������� �������
	}
	return log(x/(x-2));
}
int main(){
	setlocale(LC_ALL,"rus");
	double a,b,h;
	cout<<"������� ������� � ��� ";
	cin>>a>>b>>h;
	for(double i=a;i<=b;i+=h){
		if(ans(i)==0){
			cout<<fixed<<setprecision(10)<<i<<": "<<"���������� ���������"<<"\n";
		}else{
			cout<<fixed<<setprecision(10)<<i<<": "<<ans(i)<<"\n";
		}
	}
}
