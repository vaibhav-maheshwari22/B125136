#include <iostream>
using namespace std;

int main(){
    int bat=30;
    int *p=&bat;
    cout<<"Current battery percentage "<<*p<<"%"<<endl;
    *p+=30;
    cout<<"after charging , battery percentage"<<*p<<"%"<<endl;

    return 0;
}