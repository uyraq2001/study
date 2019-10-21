#include <iostream>
using namespace std;
int main(){
	int i=100;
	do{
		if(i/100==i%10||i/100==i/10%10||i/10%10==i%10){
			cout<<i<<"\n";
		}
		i++;
	}while(i<=999);
}
