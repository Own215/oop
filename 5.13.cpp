#include<iostream>
using namespace std;
int main(){
	int fact=1;
	cout<<"Number\t factorial\t\n";
	for (int i=1; i<=20; i++){
		fact *= i;
		cout<<i<<"\t"<<fact<<"\n";
	}
	
}
