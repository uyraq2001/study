#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double length(int x1,int x2,int y1,int y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
bool ans(double a,double b,double c){
	double o;
	if(a>b){
		o=a;
		a=b;
		b=o;
	}
	if(b>c){
		o=b;
		b=c;
		c=o;
	}
	if(a>b){
		o=a;
		a=b;
		b=o;
	}
	return a+b>c;
}
int main(){
	setlocale(LC_ALL,"rus");
	int x1,y1,x2,y2,x3,y3;
	cout<<"Введите координаты точек ";
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	if(ans(length(x1,x2,y1,y2),length(x2,x3,y2,y3),length(x3,x1,y3,y1))){
		cout<<"Возможно";
	}else{
		cout<<"Не возможно";
	}
}
