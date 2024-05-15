#include<bits/stdc++.h>

using namespace std;

class Vechicle{
    public:
    string name;
    int tire;
    

    void display_name(){
        cout<<"Car Name is : "<<name<<endl;
    }
};

class Car : public Vechicle{
    public:
    int tire = 4;

    Car(string name){
        this->name = name;
        
    }

    void feature(){
        cout<<"Extra feature"<<endl;
    }
};

int main(){
    Car porche("Porche");
    cout<<porche.tire<<endl;
    porche.feature();     
    porche.display_name();     
    return 0;
}