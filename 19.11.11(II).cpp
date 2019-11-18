#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n%2==0){
		int b=a[n/2];
		a[n/2]=a[n/2-1];
		a[n/2-1]=b;
	}else{
		a[n/2]*=2;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
	if(n!=0){
		cout<<"\b"<<".";
	}
}
