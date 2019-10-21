#include <iostream>
using namespace std;
int a;
int main(){
	cin>>a;
	while(a>0){
		cout<<a%10;
		a/=10;
	}
}
