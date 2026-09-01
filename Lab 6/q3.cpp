#include <iostream>
using namespace std;

int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    int *p=arr;

    cout <<"equipemt ID"<<endl;
    for(int i=0;i<n;i++){
        cout<<*arr+i<<" ";
    }
    cout<<endl;
    cout<<"address of equipment Id"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr+i<<" ";
    }
    cout<<endl;
    
    return 0;
}