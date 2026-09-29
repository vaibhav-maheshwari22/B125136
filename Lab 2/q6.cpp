#include <iostream>
using namespace std;

class Distance{
public:
	int feet,inches;
	

	void details(){
		cout<<"enter feet :"<<endl;
		cin>>feet;
		cout<<"enter inches :"<<endl;
		cin>>inches;
		cout<<endl;
	}

	void add(Distance d1 , Distance d2){
		feet=d1.feet+d2.feet;
		inches=d1.inches+d2.inches;

	if(d3.inches>=12){
		feet=feet+inches/12;
		inches=inches%12;
	}
	cout <<"addition of both distnaces  :"<<d3.feet<<"feet"<<d3.inches<<"inches"<<endl;
	}
};

int main(){
	dis d1,d2,d3;
	d1.details();
	d2.details();
	d3.add(d1,d2);
	return 0;
	
}