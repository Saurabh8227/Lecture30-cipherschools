#include<iostream>
using namespace std;
class New_account{
public:
int amount;
int days;

New_account(int amount_initial,int days_initial){
    amount=amount_initial;
    days=days_initial;
    cout<<"The constructor is called now";
}
void print_account_details(){
    cout<<"The amount is "<<amount;
    cout<<"the number of days "<<days<<endl;
}

~New_account()
{
    cout<<"Now the use of the object is complete and the object is getting destroyed";
}
};

int main(){
    New_account a(0,0);
    a.print_account_details();

    New_account b(100,5);
    b.print_account_details();
    
    cout<<endl<<"here all the functions and calculations take place"<<endl;
    return 0;
}
