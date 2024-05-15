// Encapsulation is a process of wrapping code and data together into a single unit,
#include <iostream>

using namespace std;

class Rectangle {
  public:
    
    int length;
    int height;

    // Constructor to initialize variables
    Rectangle(int l, int h) 
    {
        length=l;
        height=h;
    } 

    
    int Area() {
      return length * height;
    }
};

int main() {
  
  Rectangle rect(8, 6);

  cout << "Area = " << rect.Area();

  return 0;
}