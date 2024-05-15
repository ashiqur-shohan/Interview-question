// Abstraction means displaying only essential information and hiding the details
// abstraction is two type
    // a. Data abstraction
    // b. Control Abstraction
#include<bits/stdc++.h>

using namespace std;
class Account{
    // Access Specifier
    private:
        int amount;
        string acc_name;

    // Access Specifier
    public:
    void deposite(int tk){
        amount = tk + amount;
        cout<<"Your Balance"<<amount<<endl;
    }
    void withdraw(int tk,string){
        if (tk < amount){
            amount = amount - tk;
            cout<<"Your Balance"<<amount<<endl;
        }
        else {
            cout<<'you do not have enough money';
        }
    }
    void change_acc_name(string name){
        acc_name = name;
        cout<<acc_name<<endl;
    }
};

int main (){
    Account acc1 = Account();
    acc1.deposite(500);
    
    return 0;
}