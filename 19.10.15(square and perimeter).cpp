#include <iostream>
using namespace std;
int p(int a){
	return a+a;
}
int s(int a){
	return a*a;
}
int main(){
	int a,n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		cout<<"s="<<s(a)<<"   "<<"p="<<p(a);
	}
}
