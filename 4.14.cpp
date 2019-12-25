#include<iostream>
using namespace std;
int main(){
	int Account_number;
	double Balance,Total_charge,Total_credit,Credit_limit,New_balance;
	while(Account_number!=-1){
			cout<<"Enter this account number:";
	cin>>Account_number;
	cout<<"Enter this balance:";
	cin>>Balance;
	cout<<"Enter this total charge:";
	cin>>Total_charge;
	cout<<"Enter this total credit:";
	cin>>Total_credit;
	cout<<"Enter this credit limit:";
	cin>>Credit_limit;

	New_balance=(Balance+Total_charge)-Total_credit;
		cout<<"New balance is :"<<New_balance<<endl;
		cout<<"Account number is :"<<Account_number<<endl;
		cout<<"Credit limit is :"<<Credit_limit<<endl;
		if (Credit_limit<New_balance){
			cout<<"Credit limit exceed:"<<endl;
		}
	}

	
		
	
	
	
	
	
	
	
	return 0;
}
