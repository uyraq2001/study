#include <iostream>
using namespace std;
int main(){
	int count=0,a;
	cin>>a;
	while(a!=0){
		if(a<0){
			count++;
		}
		cin>>a;
	}
	cout<<count;
}
