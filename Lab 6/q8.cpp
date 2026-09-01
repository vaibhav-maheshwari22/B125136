#include <iostream>
using namespace std;

void update(int *p,int n){
    for(int i=0;i<n;i++){
        *(p+i)+=5;
    }
}
int main(){
    int n=5;
    int std[n]={50,60,70,80,90};
    int *p=std;

    cout <<"marks before"<<endl;
    for(int i=0;i<n;i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
    update(p,n);
    cout<<"after modication marks"<<endl;
    for(int i=0;i<n;i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;

    return 0;
}