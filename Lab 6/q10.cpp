#include <iostream>
using namespace std;

int main(){
    int n=5;
    int *no = new int(n);
    cout<<"enter contact numbers";
    for(int i=0;i<n;i++){
        cin>>no[i];
    }

    int key=54321;
    int pos=-1;
    for(int i=0;i<n;i++){
        if(*(no+i)==key){
            pos=i+1;
        }
    }
    if(pos!=-1)
    cout<<"contact number found at position "<<" "<<pos<<endl;
    else{
        cout<<"contact number not found";
    }

    delete[] no;
    no=nullptr;

    return 0;
}