#include<bits/stdc++.h>

using namespace std;

class Calculator{
    public:
    // attribute
    string model;

    // constructor
    Calculator(string model)
    {
        this->model = model;
    }

    //method
    void add(int x, int y){
        cout<< x+y<<endl;
    }

    // It is automatically called when an object goes out of scope. 
    //destructor
    ~Calculator(){
        cout<<"This is"<<model<<endl;
    }
};

int main(){
    Calculator casio("Casio fx-999ex");
    casio.add(4,7);
              
    return 0;
}