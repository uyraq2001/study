#include <iostream>
using namespace std;
int x2=2,y2=2;
double x,y;
int main(){
	cin>>x>>y;
	if(((x-x2)*(x-x2)+(y-y2)*(y-y2))>1 && ((x-x2)*(x-x2)+(y-y2)*(y-y2))<4 && y<x){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}
