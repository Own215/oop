#include<iostream>
using namespace std;
GCD(int a, int b){
	if(b==0)
	return a;
	return GCD(b,a%b);
}
int main(){
	
	int t, y;
	cout<<"Enter number:"<<endl;
	cin>>t;
	cout<<"Enter number:"<<endl;
	cin>>y;
	cout<<" GCD of "<<t<<" and "<<y<<" is:"<<endl;
}
