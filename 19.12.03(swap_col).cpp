#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int **a=new int*[n];
	for(int i=0;i<n;i++){
		a[i]=new int[m];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		int b=a[i][0];
		a[i][0]=a[i][m-1];
		a[i][m-1]=b;
	}
	for(int i=0;i<n;i++){
		cout<<'\n';
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<' ';
		}
	}
}
