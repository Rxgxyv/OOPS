/*Definition: Encapsulation is the process of bundling the data (variables) and functions 
that operate on the data into a single unit or class. It restricts direct access to some components, 
making the data safe from unintended modifications. 
In C++, this is achieved using access specifiers like private, protected, and public.*/
#include<iostream>
using namespace std;
class bank{
private:
    double balance;
public:
    bank(){
        balance=0;
    }
    bank(double initalamount){
        if(initalamount>=0) balance=initalamount;
        else {
            balance=0;
            cout<<"Invalid Initial balance:"<<endl;
        }
    }

    void deposit(double amount){
        if(amount>0) balance+=amount;
        else cout<<endl<<"Invalid amount for deposit";
    }

    void withdraw(double amount){
        if(amount > 0 and amount <=balance){ 
            balance-=amount;
            cout<<endl<<"Available Balance is:"<<balance;
        }
        else{
            cout<<"Invalid amount for withdraw"<<endl;
        }
    }

    void getbalance(){
        cout<<"Rs:"<<balance<<endl;
    }
};
int main(){
    double initalamount;
    cout<<"Enter the initial Amount:"<<endl;
    cin>>initalamount;
    bank obj(initalamount);
    int i=1;
    while(i < 4){
        cout<<"Enter the choice:"<<endl;
        cout<<"1.DEPOSIT"<<endl;
        cout<<"2.WITHDRAWL"<<endl;
        cout<<"3.DISPLAY"<<endl;
        cout<<"4.EXIT"<<endl;
        cin>>i;
        switch (i)
        {
        case 1:{
            double amou;
            cout<<"Enter the Amount for deposit:"<<endl;
            cin>>amou;
            obj.deposit(amou);
            cout<<"After Deposit Available Balance is:"<<endl;
            obj.getbalance();
            break;
        }
        case 2:{
            double amnt;
            cout<<"Enter the amount for withdrawl:"<<endl;
            cin>>amnt;
            obj.withdraw(amnt);
            break;
        }
        case 3:{
            cout<<"AVAILABLE BALANCE IS:"<<endl;
            obj.getbalance();
            break;
        }
        case 4:
            break;
        }
    }

}