#include<iostream>
using namespace std;

int main(){
	int *p=new int;
	cout<<"enter integer"<<endl;
	cin>>*p;

	cout<<"integer is "<<*p;
	cout<<endl;

	delete p;
	p=nullptr;

	return 0;
}