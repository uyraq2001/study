#include <iostream>
using namespace std;
bool f(int a){
	if(a%2==0){
		return true;
	}else{
		return false;
	}
}
int main(){
	int a;
	cin>>a;
	if(f(a)){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}
