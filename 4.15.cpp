#include<iostream>
using namespace std;
int main(){
	float Work,Leave;
	while(Work!=-1){
		cout<<"Enter this whole work(work!=-1)";
		cin>>Work;
		Leave=(Work/10*9)+200;
		cout<<"Your leave is:"<<Leave<<endl;
	}
	
	
	
	return 0;
}
