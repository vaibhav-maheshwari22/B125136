#include <iostream>
using namespace std;

class product{

public :
	string id;
	string name;
	int quantity;
	float price;
	float value;
	int sell;

void enter(){
   	cout<<"Enter  name  :"<<endl;
   	cin>>name;
   	cout<<"enter id  :"<<endl;
   	cin>>id;
   	cout <<"enter quantity :"<<endl;
   	cin>>quantity;
   	cout <<"enter price per unit:"<<endl;
   	cin>>price;
   }

   void update(){
   	cout <<"enter sell quantity :"<<endl;
   	cin>>sell;
   	if (sell > quantity) {
   	 cout << " Not enough stock!" << endl;
    	return;
		}
   	quantity-=sell;
   	cout<<"New quantity :"<<quantity<<endl;
   }

   void inventory(){
   	value=price*quantity;
   	cout<<"inventory Value :"<<value<<endl;
   }

	void display(){
   	cout<<"product name  :"<<name<<endl;
   	cout<<"product id  :"<<id<<endl;
   	cout<<"quantity  :"<<quantity<<endl;
   	cout<<"price per unit  :"<<price<<endl;
   	

   }
};


int main(){

	product p;
	p.enter();
	p.update();
	p.inventory();
	p.display();
  
	return 0;

}