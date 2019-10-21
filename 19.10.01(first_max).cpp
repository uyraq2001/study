#include <iostream>
using namespace std;
int main(){
	int im,a,m=-1000000,n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(m<a){
			m=a;
			im=i;
		}
	}
	cout<<im;
}
