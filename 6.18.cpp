#include<iostream>
using namespace std;
pwr(int base,int exp){
	int answer=1;
	while(exp!=0){
		cout<<base<<"*"<<base<<"-";
		answer*=base;
		--exp;
	}
	cout<<"Anwwer is:"<<endl;
}
int main(){
	int a,c,base;
	cout<<"Enter base integer:"<<endl;
	cin>>a;
	cout<<"Enter exponent integer:"<<endl;
	cin>>c;

	pwr(a,c);
}
