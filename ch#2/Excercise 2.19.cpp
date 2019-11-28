#include <iostream>                 //header
using namespace std;
int main (){                       // main function
	int a,b,c,largest,smallest;   //sum,product average,smallest,largest number
	double average;
	float sum,product;
	cout<<"\t::::::::::                          ::::::::::\n";
	cout<<"\t::::::::::                          ::::::::::\n";
	cout<<"\t::::::::::    EXCERCISE 2.19        ::::::::::\n";
	cout<<"\t::::::::::                          ::::::::::\n";
	cout<<"\t::::::::::                          ::::::::::\n";
	cout<<"Enter three number"<<endl;
	cin>>a;
	largest=a;
	smallest=a;
	cin>>b;
	if (largest<b){
		largest=b;
	}else if(smallest=b){
		smallest=b;
	}
	cin>>c;
	if (largest<c){
		largest=c;
	}else if(smallest=c){
		smallest=c;
	}
	
	
	

	cout<<"The sum is three number:"<<a+b+c<<endl;      
	cout<<"The product is three number:"<<a*b*c<<endl;
	cout<<"The average is three number:"<<(a+b+c)/3<<endl;
	
	cout<<"largest is:"<<largest<<endl;
	cout<<"smallest is:"<<smallest<<endl;
			
	return 0;
}
