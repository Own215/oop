#include<iostream>
using namespace std;
int main(){
	
	int a,c=1;
	int first_max,second_max;
	while(c<=10){
		cout<<"Enter this number:";
		cin>>a;
		if(first_max<a){
			second_max=first_max;
			first_max=a;
		}
		else if(second_max<a){
		second_max=a;
		}
		c++;
	}
	cout<<"First maximum number is: "<<first_max<<endl;
	cout<<"Second maximum number is: "<<second_max<<endl;
	
	
	
	
	return 0;
}
