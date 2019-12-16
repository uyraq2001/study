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
		a[i]=new int[m+1];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		a[i][m]=a[i][m-1];
		a[i][m-1]=0;
	}
	for(int i=0;i<n;i++){
		cout<<'\n';
		for(int j=0;j<m+1;j++){
			cout<<a[i][j]<<' ';
		}
	}
}
