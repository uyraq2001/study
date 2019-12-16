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
	int mn=1e9,jmn;
	for(int j=0;j<m;j++){
		int s=0;
		for(int i=0;i<n;i++){
			s+=a[i][j];
		}
		if(s<mn){
			mn=s;
			jmn=j;
		}
	}
	cout<<jmn;
}
