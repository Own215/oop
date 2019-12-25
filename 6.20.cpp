#include<iostream>
using namespace std;
factor(int a, int b){
	
		if(b%a==0){
			cout<<"True"<<endl;
		}else{
			cout<<"False";
		}
	
}
int main(){
	int d, f;
	cout<<"Enter first number:";
	cin>>d;
	cout<<"Enter second number:";
	cin>>f;
	factor(f,d);
}
