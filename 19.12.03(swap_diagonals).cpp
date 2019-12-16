#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	int **a=new int*[n];
	for(int i=0;i<n;i++){
		a[i]=new int[n];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		int b=a[i][i];
		a[i][i]=a[i][n-i-1];
		a[i][n-i-1]=b;
	}
	for(int i=0;i<n;i++){
		cout<<'\n';
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<' ';
		}
	}
}
