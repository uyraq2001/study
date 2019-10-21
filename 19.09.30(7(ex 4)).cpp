#include <iostream>
using namespace std;
int f(int x){
	if(x==1){
		return 1;
	}
	if(x==2){
		return 2;
	}
	return f(x-1)+f(x-2);
}
int main(){
	setlocale(LC_ALL,"rus");
	int n;
	cout<<"¬ведите n ";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<f(i)<<"\n";
	}
}
