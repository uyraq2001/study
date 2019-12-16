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
	int mx=-1e9,imx;
	for(int j=0;j<m;j++){
		for(int i=0;i<n;i++){
			if(a[i][j]>mx){
				mx=a[i][j];
				imx=i;
			}	
		}
	}
	for(int j=0;j<m&&imx!=n-1;j++){
		a[imx][j]=a[imx+1][j];
	}
	for(int i=0;i<n-1;i++){
		cout<<'\n';
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<' ';
		}
	}
}
