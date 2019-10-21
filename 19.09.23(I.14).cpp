#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL,"rus");
	int x,y;
	cout<<"Введите x и y ";
	cin>>x>>y;
	if(x>-23&&x<0&&y>x&&y<0){
		cout<<"Да";
	}else{
		if(x>=-23&&x<=0&&y>=x&&y<=0){
			cout<<"На границе";
		}else{
			cout<<"Нет";
		}
	}
}
