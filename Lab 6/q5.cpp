#include <bits/stdc++.h>
using namespace std;

void updateStatus(int *status){
    if(*status==0){
        *status=1;
    }else if(*status==1){
        *status=2;
    }
}
int main(){
    unordered_map<int,string>mp;
    mp[0]="Processing";
    mp[1]="Shipped";
    mp[2]="Delivered";

    int status=0;
    cout<<"status before "<<mp[status]<<endl;

    updateStatus(&status);
    cout<<"updated status"<<" "<<mp[status]<<endl;
    return 0;
}