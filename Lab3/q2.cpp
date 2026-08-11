#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"size of array";
	cin>>n;
	int *p=new int[n];

	cout<<"enter integers"<<endl;

	for(int i=0;i<n;i++)
	cin>>p[i];

	cout<<"integer are ";
	for(int i=0;i<n;i++){
		cout<<p[i]<<" ";
	}
	cout<<endl;

	delete[] p;
	p=nullptr;

	return 0;
}