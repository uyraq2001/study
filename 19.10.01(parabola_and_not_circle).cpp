#include <iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	if(y>=x*x&&(2-x)*(2-x)+y*y>=4){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}
