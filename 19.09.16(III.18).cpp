#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL,"rus");
	int a,b,c;
	cout<<"Введите стороны:";
	cin>>a>>b>>c;
	a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b ? cout<<"Является":cout<<"Не является";
}
