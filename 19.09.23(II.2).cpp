#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL,"rus");
	int a;
	cout<<"¬ведите номер мес€ца ";
	cin>>a;
	switch(a){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<31;
			break;
		case 2:
			cout<<28;
			break;
		default:
			cout<<30;
			break;
	}
}
