#include<iostream>
using namespace std;
int main(){
	int weight;
	double height;

	cout<<"\t::::::::::                          ::::::::::\n";
	cout<<"\t::::::::::                          ::::::::::\n";
	cout<<"\t::::::::::    EXCERCISE 2.30        ::::::::::\n";
	cout<<"\t::::::::::                          ::::::::::\n";
	cout<<"\t::::::::::                          ::::::::::\n";
	cout<<"\t\t  BODY MASS INDEX CALCULATOR\n";
	
	cout<<"Enter this weight(lbs):";
	cin>>weight;
	cout<<"Enter this height(in):";
	cin>>height;
	int BMI=(weight*703)/(height*height);// FORMULA OF BODY MASS INDEX
	cout<<"\n BMI is"<<BMI<<"\n\n";
	cout<<"BMI value:                          \n";
	cout<<"Under weight: less than 18.5       \n";
	cout<<"Normal:       between 18.5 and 24.9\n";
	cout<<"Over weight:  between 25 and 29.9  \n";
	cout<<"Obese:        30 or greater        \n";
	
	
	
	
	
	
	return 0;
}
