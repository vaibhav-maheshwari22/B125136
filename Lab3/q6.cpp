#include <iostream>
using namespace std;

class employee{

public :
	string id;
	string name;
	float salary;

void enter(){
   	cout<<"Enter  name  :"<<endl;
   	cin>>name;
   	cout<<"enter id  :"<<endl;
   	cin>>id;
   	cout <<"enter your salary :"<<endl;
   	cin>>salary;
   }


	void display(){
   	cout<<"employee name  :"<<name<<endl;
   	cout<<"employee id  :"<<id<<endl;
   	cout<<"salary  :"<<salary<<endl;
   }
};


int main(){
	
	int n;
	cout<<"number of employees";
	cin>>n;
	employee *e=new employee[n];
	for(int i=0;i<n;i++){
		e[i].enter();
		
	}

	for(int i=0;i<n;i++){
		e[i].display();
		cout<<endl;
		
	}
	return 0;

}