#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double x,y;
int main(){
	cin>>x>>y;
	cout<<fixed<<setprecision(7)<<sin(pow(x,3))+pow(cos(y),5)+M_PI*(log(x)/sqrt(x+log10(y)));
}
