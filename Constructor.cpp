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
};

int main(){
    New_account a;
    return 0;
}
