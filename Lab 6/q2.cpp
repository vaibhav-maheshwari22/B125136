#include <iostream>
using namespace std;

int main(){
    int water=30;
    int *p=&water;
    cout<<"Current water level"<<*p<<"cm"<<endl;
    *p+=30;
    cout<<"after adding water,water level"<<*p<<"cm"<<endl;
    *p-=20;
    cout<<"after removing water,water level"<<*p<<"cm"<<endl;


    return 0;
}