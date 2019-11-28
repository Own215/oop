#include<iostream>// Header
using namespace std;
const double PI=3.14159;
int main(){// main function
	
	int radius;//              Body(read radius of circle to find diameter,circumfrence,area)
	cout<<"\t::::::::::                          ::::::::::\n";
	cout<<"\t::::::::::                          ::::::::::\n";
	cout<<"\t::::::::::    EXCERCISE 2.20        ::::::::::\n";
	cout<<"\t::::::::::                          ::::::::::\n";
	cout<<"\t::::::::::                          ::::::::::\n";
	cout<<"Enter radius"<<endl;
	cin>>radius;
	cout<<"Diameter:"<<2*radius<<endl;
	cout<<"Circumfrence:"<<PI* (2*radius)<<endl;
	cout<<"Area:"<<PI*(radius*radius)<<endl;
	
	
	
	
	
	return 0;
}
