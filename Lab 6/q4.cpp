#include <iostream>
using namespace std;

int main(){
    int n=8;
    int arr[n]={1,2,3,4,5,6,9,8};
    int *p=arr;
    cout<<"seat list before"<<endl;
     for(int i=0;i<n;i++){
        cout<<*arr+i<<" ";
    }
    cout<<endl;
    //wrong seat number position
    int pos=6;
    //correct seat number
    int key=7;
    *(p+pos)=key;
    cout<<"seat list after correction"<<endl;
    for(int i=0;i<n;i++){
        cout<<*arr+i<<" ";
    }
    cout<<endl;
    
    return 0;
}