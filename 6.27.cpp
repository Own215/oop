#include<iostream>
using namespace std;
minimum(float a, float b, float c){
	int minimum=0;
	if(a<b && a<c){
		minimum=a;
		cout<<a<<"is minimum"<<endl;
	}else
	if(b<a && b<c){
		minimum=b;
		cout<<b<<"is minimum"<<endl;
	}else{
		minimum=c;
		cout<<c<<"is minimum"<<endl;
	}
}
int main(){
	float r,t,y;
	cout<<"Enter 1 number: "<<endl;
	cin>>r;
	cout<<"Enter 2 number: "<<endl;
	cin>>t;
	cout<<"Enter 3 number: "<<endl;
	cin>>y;
	minimum(r,t,y);
	
}
