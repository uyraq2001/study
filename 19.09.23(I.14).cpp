#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL,"rus");
	int x,y;
	cout<<"������� x � y ";
	cin>>x>>y;
	if(x>-23&&x<0&&y>x&&y<0){
		cout<<"��";
	}else{
		if(x>=-23&&x<=0&&y>=x&&y<=0){
			cout<<"�� �������";
		}else{
			cout<<"���";
		}
	}
}
