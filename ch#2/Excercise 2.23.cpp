#include<iostream>//header
using namespace std;
int main(){// main function
	int a,b,c,d,e,smallest,largest;
	cout<<"\t::::::::::                          ::::::::::\n";
	cout<<"\t::::::::::                          ::::::::::\n";
	cout<<"\t::::::::::    EXCERCISE 2.23        ::::::::::\n";
	cout<<"\t::::::::::                          ::::::::::\n";
	cout<<"\t::::::::::                          ::::::::::\n";
	cout<<"Enter five number"<<endl;
	cin>>a;
	smallest=a;//get value of first number and compare with each other
	largest=a;//get value of first number and compare with each other
	cin>>b;
	if(largest<b){
		largest=b;//if input is larger than largest it will replace the correct value and compare with each input
	}else if(smallest>b){
		smallest=b;
	}
	
	cin>>c;
	if(largest<c){
		largest=c;//if input is larger than largest it will replace the correct value and compare with each input
	}else if(smallest>c){
		smallest=c;
	}
	cin>>d;
	if(largest<d){
		largest=d;//if input is larger than largest it will replace the correct value and compare with each input
	}else if(smallest>d){
		smallest=d;
	}
	cin>>e;
	if(largest<e){
		largest=e;//if input is larger than largest it will replace the correct value and compare with each input
	}else if(smallest>e){
		smallest=e;
	}
	cout<<"The largest number is"<<largest<<endl;
	cout<<"The smallest number is"<<smallest<<endl;
	
	
	
	return 0;
}
