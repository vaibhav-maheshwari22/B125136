#include <iostream>
using namespace std;

int main(){
    int n=5;
    int *table = new int(n);
    cout<<"enter table numbers";
    for(int i=0;i<n;i++){
        cin>>table[i];
    }
    int m=*table;
    for(int i=0;i<n;i++){
        if(*(table+i)<m){
            m=*(table+i);
        }
    }
    cout<<"smallest table number "<<" "<<m<<endl;

    delete[] table;
    table=nullptr;

    return 0;
}