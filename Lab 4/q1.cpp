#include <iostream>
#include<string>
using namespace std;

class Diary{
    private:
        string name;
        int n;
        int last;

    public:
        void get(){
            cout<<"enter Name";
            getline(cin,name);
            cout<<"enter number  of entries";
            cin>>n;
            cout<<"enter last entry";
            cin>>last;  
        }
        friend void displayDiary(Diary &d);

};

void displayDiary(Diary &d){
    cout<<"Name"<<d.name<<endl;
    cout<<"Number of entries"<<d.n<<endl;
    cout<<"Last entry"<<d.last<<endl;
}

int main(){
    Diary d;
    d.get();
    displayDiary(d);

    return 0;
}