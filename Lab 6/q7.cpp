#include <iostream>
using namespace std;

int main(){
    char arr[]="i am 18 yr old";
    char *p=arr;
    /*  d count of digits
        c count of characters
        s count of spaces
    */
    int d=0,c=0,s=0;
    while(*p!='\0'){
        if(isalpha(*p))c++;
        else if(isdigit(*p))d++;
        else s++;
        p++;
    }
    cout<<"character count "<<c<<endl;
    cout<<"digit count "<<d<<endl;
    cout<<"space count "<<s<<endl;

    return 0;
}