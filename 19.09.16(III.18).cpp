#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL,"rus");
	int a,b,c;
	cout<<"������� �������:";
	cin>>a>>b>>c;
	a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b ? cout<<"��������":cout<<"�� ��������";
}
