#include<iostream>
using namespace std;
int main(){
	int c =1, num;
	int firstmax=0, secondmax=0,thirdmax=0,fourthmax=0;
	while (c<=10){
		cout<<"please enter value number"<<c<<"\n";
		cin>>num;
		if(firstmax<num){
			fourthmax = thirdmax;
			thirdmax = secondmax;
			secondmax = firstmax;
			firstmax = num; 
		}
		else if(secondmax<num){
		thirdmax = secondmax;
		secondmax = firstmax;
		firstmax = num; 
		}
		else if(thirdmax<num){
		secondmax = firstmax;
		firstmax = num;	
		}
		else if(fourthmax<num){
			fourthmax = num;
			
			
		}
		c++;
		
	}
	cout<<"The first maximum number:"<<firstmax<<"\n";
	cout<<"The second maximum number:"<<secondmax<<"\n";
	cout<<"The third maximum number:"<<thirdmax<<"\n";
	cout<<"The fourth maximum number:"<<fourthmax<<"\n";

	
	
	
	return 0;
}
