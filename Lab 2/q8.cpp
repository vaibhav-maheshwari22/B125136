#include <iostream>
using namespace std;

class LibraryBook{

public :
	string id;
	string name;
	string title;
	int days;
	int fine;

void enter(){
   	cout<<"Enter  name  :"<<endl;
   	cin>>name;
   	cout<<"enter id  :"<<endl;
   	cin>>id;
   	cout <<"enter book title :"<<endl;
   	cin>>title;
   	cout <<"enter days issued:"<<endl;
   	cin>>days;
   }

   void charges(){
   	if(days>15){
   		fine=(days-15)*2;
   	}else{
   		fine =0;
   		return;
   	}
   	cout<<"Fine :"<<fine<<endl;
   }

  

	void display(){
   	cout<<"student name  :"<<name<<endl;
   	cout<<"book id  :"<<id<<endl;
   	cout<<"book title :"<<title<<endl;
   	cout<<"number of days book issued  :"<<days<<endl;
   	cout <<"fine :"<<fine<<endl;

   }
};


int main(){

	LibraryBook b;
	b.enter();
	b.charges();
	b.display();
  
	return 0;

}