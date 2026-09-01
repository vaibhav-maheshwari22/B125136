#include <iostream>
using namespace std;

void findMax(int *p, int n){
    int max=*p;
    for(int i=0;i<n;i++){
        if(*(p+i)>max){
            max=*(p+i);
        }
    }
    cout<<"longest episode  duration is "<<max<<endl;
}
int main(){
    int n=6;//number of episodes
    int p[n]={1,2,3,4,5,6};
    int *ptr=p;
    findMax(ptr,n);

    return 0;
}