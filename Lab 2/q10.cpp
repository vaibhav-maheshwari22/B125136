#include <iostream>
using namespace std;

class ElectricityBill{

public :
	int no;
	string name;
	int units;
	int bill;

void enter(){
   	cout<<"Enter  name  :"<<endl;
   	cin>>name;
   	cout<<"enter number  :"<<endl;
   	cin>>no;
   	
   	cout <<"enter units consumed:"<<endl;
   	cin>>units;
   }

   void charges(){
   	if(units<=100){
   		bill=5*units;
   		return;
   	}else if(units>100 && units<=200){
   		bill=100*5+(units-100)*7;
   		return;
   	}else{
   		bill=100*5+100*7+(units-200)*10;
   		return;
   	}
   }

  

	void display(){
   	cout<<"consumer name  :"<<name<<endl;
   	cout<<"consumer number  :"<<no<<endl;
   	cout<<"number of units consumed :"<<units<<endl;
   	cout <<"bill :"<<bill<<endl;

   }
};


int main(){

	ElectricityBill e;
	e.enter();
	e.charges();
	e.display();
  
	return 0;

}