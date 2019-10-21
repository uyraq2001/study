#include <iostream>
#include <math.h>
using namespace std;
int a,b,c;
int main()
{
	cin>>a>>b>>c;
	if (b*b-4*a*c > 0){
		cout<<((-1)*b-sqrt(b*b-4*a*c))/(2*a)<<"   "<<((-1)*b+sqrt(b*b-4*a*c))/(2*a);
	}
	if (b*b-4*a*c == 0){
		cout<<((-1)*b)/(2*a);
	}
}
