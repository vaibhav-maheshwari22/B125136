#include<iostream>
#include<limits.h>
using namespace std;

int main(){
	int n;
	cout<<"size of array";
	cin>>n;
	int *p=new int[n];

	cout<<"enter integers"<<endl;
	int mx=INT_MIN;
	for(int i=0;i<n;i++){
	cin>>p[i];
	mx=max(mx,p[i]);
	}	
	
	cout<<"largest integer is "<<mx<<endl;;
	
	cout<<endl;

	delete[] p;
	p=nullptr;

	return 0;
}