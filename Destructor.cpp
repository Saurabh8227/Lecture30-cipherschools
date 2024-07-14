#include<iostream>
using namespace std;
class New_account{
public:
int amount;
int days;

New_account(){
    amount=0;
    days=0;
    cout<<"The constructor is called now";
}

~New_account()
{
    cout<<"Now the use of the object is complete and the object is getting destroyed";
}
};

int main(){
    New_account a;

    cout<<endl<<"here all the functions and calculations take place"<<endl;
    return 0;
}
