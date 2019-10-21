#include <iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	if(x<=0&&(-1-x)*(-1-x)+(1-y)*(1-y)>=1&& !(x>-1&&x<0&&y>-1&&y<0)){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}
