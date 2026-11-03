#include <iostream>
using namespace std;
class Bank{
    int accNo;
    float balance;
public:
//Constructor
Bank(int a,float b){
    accNo=a;
    balance=b;
}
void deposit(float amount){
    balance+=amount;
}
void withdraw(float amount){
    if(amount<=balance){
    balance-=amount;}
    else{
    cout<<"Insufficient balance!\n";
    }
}

void display(){
    cout<<"Account Number:"<<accNo<<endl;
    cout<<"Balance:Rs."<<balance<<endl;
}
};
int main(){
    Bank b1(101,5000);
    b1.display();
    b1.deposit(1000);
    b1.withdraw(500);
    cout<<"\nAfter transactions:\n";
    b1.display();
    return 0;
}
