#include<bits/stdc++.h>

using namespace std;

class Bank{
    public:
    string name;
    int  amount;
    //constructor
    Bank(string name,int amount)
    {
        this->name = name;
        this->amount = amount;
    }

    //inside the class definition
    void display_name(){
        cout<<"Thank for banking with "<<name<<endl;
    }

    void loan(int v);
};


//outside method definition
void Bank::loan(int tk){
    if (tk>amount){
        cout<<"You can not take loan more than half of your money";
    }
    else{
        cout << "Loan Granted";
    }
}
                    
int main(){
    Bank Bank1("padma",500);
    Bank1.display_name();
    Bank1.loan(100);     
    return 0;
}