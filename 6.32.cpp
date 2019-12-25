#include<iostream>
using namespace std;
qualitypoints(int avg){
	if(avg>=90){
	return 4;
	}else
		if(avg>=80){
	return 3;
	}else
		if(avg>=70){
	return 2;
	}else
		if(avg>=60){
	return 1;
	}else{
	return 0;
	}
}
int main(){
	
	int a,choice;
	cout<<"Enter many student data:"<<endl;
	cin>>choice;
	for(int i=0;i<choice;i++){
	cout<<"Enter average of student :"<<endl;
	cin>>a;
	}
	cout<<"points :"<<qualitypoints(a);
	
}
