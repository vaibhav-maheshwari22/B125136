#include <iostream>
using namespace std;

class calculator{
public:
	int a,b;
	int add,sub,div,mul;

	void input(){
		cout<<"enter numbers"<<endl;
		cin>>a>>b;
	}
	void nadd(){
		add=a+b;
		cout<<"Addition  :"<<add<<endl;
	}
	void nsub(){
		sub=a-b;
		cout<<"subtraction  :"<<sub<<endl;
	}
	void nmul(){
		mul=a*b;
		cout<<"Multiplication  :"<<mul<<endl;
	}
	void ndiv(){
		if(b==0){
			cout <<"Division by 0 not possible!"<<endl;
			return;
		}
		div=a/b;
		cout<<"Division  :"<<div<<endl;
	}
};

int main(){
	calculator c;
	c.input();
	c.nadd();
	c.nsub();
	c.nmul();
	c.ndiv();

	return 0;
	
}