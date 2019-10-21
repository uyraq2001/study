#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "rus" );
	double x;
	cout<<"¬ведите s:";
	cin>>x;
	cout<<fixed<<setprecision(7)<<"r="<<sqrt(x/M_PI);
}
