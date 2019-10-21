#include <iostream>
using namespace std;
int p(int a){
	return a+a;
}
int s(int a){
	return a*a;
}
int main(){
	int a;
	cin>>a;
	cout<<"s="<<s(a)<<"\n"<<"p="<<p(a);
}
