#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	a[n-1]=1;
	a[n-2]=1;
	a[n-3]=1;
	for(int i=n-1;i>=0;i--){
		cout<<a[i]<<",";
	}
	if(n!=0){
		cout<<"\b"<<".";
	}
}
