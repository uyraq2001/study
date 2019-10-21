#include <iostream>
using namespace std;
int main(){
	int i=100;
	while(i<=999){
		if(i/100==i%10||i/100==i/10%10||i/10%10==i%10){
			cout<<i<<"\n";
		}
		i++;
	}
}
