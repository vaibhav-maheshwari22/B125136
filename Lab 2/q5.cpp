#include <iostream>
using namespace std;

class employee{

public :
	string id;
	string name;
	float salary;
	float hra,da,gross_salary;

void enter(){
   	cout<<"Enter  name  :"<<endl;
   	cin>>name;
   	cout<<"enter id  :"<<endl;
   	cin>>id;
   	cout <<"enter your salary :"<<endl;
   	cin>>salary;
   }

   void calc(){
   	hra=0.2*salary;
   	da=0.1*salary;
   	gross_salary=salary+hra+da;
   }

	void display(){
   	cout<<"employee name  :"<<name<<endl;
   	cout<<"employee id  :"<<id<<endl;
   	cout<<"salary  :"<<salary<<endl;
   	cout<<"hra  :"<<hra<<endl;
   	cout<<"da  :"<<da<<endl;
   	cout<<"gross salary  :"<<gross_salary<<endl;

   }
};


int main(){

	employee e;
	e.enter();
	e.calc();
	e.display();
  
	return 0;

}