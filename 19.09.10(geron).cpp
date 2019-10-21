#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double x1,x2,x3,y1,y2,y3;
int main(){
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	//a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))
	//b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3))
	//c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3))
	//p=((sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))+sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3))+sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)))/2)
	cout<<sqrt(((sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))+sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3))+sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)))/2)*(((sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))+sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3))+sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)))/2)-sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)))*(((sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))+sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3))+sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)))/2)-sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)))*(((sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))+sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3))+sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)))/2)-sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3))));
}
