#include<iostream>
using namespace std;
main(){
	int input,first,second,third,forth,r,org;
	cout<<"Enter 4 digits value ";
	cin>>input;
	org=input;
	r = input%10;
	input= input/10;
	forth = r;
	r = input%10;
	input= input/10;
	third = r;
	r = input%10;
	input= input/10;
	second = r;
	first = (first+7)%10;
	second = (second+7)%10;
	third = (third+7)%10;
	forth = (forth+7)%10;
	cout<<"The original text is :"<<org<<"\n";
	cout<<"The encrypted text is"<<third<<forth<<first<<second;
	return 0;
}
