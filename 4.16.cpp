#include<iostream>
using namespace std;
int main(){
	float laps,rate;
	double contribution;
	while(laps!=-1){
		cout<<"Enter laps completed:";
		cin>>laps;
		cout<<"Enter sponsership rate:";
		cin>>rate;
		contribution=laps*rate;
		cout<<" Student Contribution is:"<<contribution<<endl;
	}
	
	
	
	
	
	return 0;
}
