#include<iostream>
using namespace std;
rectangle(int a , int b){
		for(int i=1;i<=b;i++){
	
		for(int j=1; j<=a; j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	
	
}
int main(){
	int h,w;
	cout<<"Enter height of rectangular:";
	cin>>h;
		cout<<"Enter width of rectangular:";
	cin>>w;
	rectangle(w,h);
}
