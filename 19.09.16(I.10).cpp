#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "rus" );
	double x;
	cout<<"¬ведите x:";
	cin>>x;
	cout<<fixed<<setprecision(7)<<"x="<<1+x/3+abs(x)+((x*x*x)+4)/2;
}
