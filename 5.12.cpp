#include<iostream>
using namespace std;
int main(){
int prod=1;
for(int i=3; i<=50; i++){
	if(i%3==0){
		prod = prod* i;
	}
}
	cout<<"Product is: "<<prod;
}
