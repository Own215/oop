#include<iostream>
using namespace std;
reverse(int n){
	int reverseNum=0,remainder;
	while(n!=0){
	remainder=n%10;
	reverseNum=reverseNum*10+remainder;
	n/=10;
	}
	cout<<"Remainder number is:"<<reverseNum;
}
int main(){
	
	int a;
	cout<<"Enter number:";
	cin>>a;
	reverse(a);
}
