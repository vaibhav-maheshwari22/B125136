#include <iostream>
using namespace std;

class rectangle{
public:
	int length,breadth;
	int area,perimeter;


	void rarea(){
		area=length*breadth;
		cout<<"Area of rectangle  :"<<area<<endl;
	} 
	void rperimeter(){
		perimeter=2*(length+breadth);
		cout<<"perimeter of rectangle  :"<<perimeter<<endl;
	}
	void details(){
		cout<<"enter length :"<<endl;
		cin>>length;
		cout<<"enter breadth  :"<<endl;
		cin>>breadth;
		cout<<endl;
	}
};

int main(){
	rectangle r;
	r.details();
	r.rarea();
	r.rperimeter();
	return 0;
	
}