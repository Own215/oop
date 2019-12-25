#include<iostream>
using namespace std;
int main(){
	int a, b ,small;
	cout<<"enter two number:";
	cin>>a>>b;
	small= 0;
	if (a>b){
		small=b;
	}
	else{
		small=a;
	}
	cout<<"Smallest number is:"<<small<<endl;
}
