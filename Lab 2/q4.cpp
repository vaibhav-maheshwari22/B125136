#include <iostream>
using namespace std;

class BankAccount{
public:
   int acc_no;
   string name;
   float balance;
   float depositamt;
   float withdrawamt;

   void enter(){
   	cout<<"Enter account holder name  :"<<endl;
   	getline(cin,name);
   	cout<<"enter account number  :"<<endl;
   	cin>>acc_no;
   	cout <<"enter your balance  :"<<endl;
   	cin>>balance;
   }

   void deposit(){
   	cout<<"enter deposit amount :"<<endl;
   	cin>>depositamt;
   	balance+=depositamt;
   	cout<<"Balance  :"<<balance<<endl;
   }
   void withdraw(){
   	cout <<"Enter withdrawal amount  :"<<endl;
   	cin>>withdrawamt;
   	if(withdrawamt>balance){
   		cout <<"Withdrawal amount is greater than balance"<<endl;
   		return;
   	}
   	balance-=withdrawamt;
   	cout<<"balance  :"<<balance<<endl;
   }

   void display(){
   	cout<<"account holder name  :"<<name<<endl;
   	cout<<"account number  :"<<acc_no<<endl;
   	cout<<"balance  :"<<balance<<endl;

   }

};
int main(){
	BankAccount b;
	b.enter();
	b.deposit();
	b.withdraw();
	b.display();

		return 0;
}