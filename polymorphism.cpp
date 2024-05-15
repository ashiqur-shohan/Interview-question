// Polymorphism means "many forms" and it occurs when we have many classes that are related to each other by inheritance.

#include <iostream>

using namespace std;

class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound "<<endl;
    }
};



class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow "<<endl;
    }
};


class Cat : public Animal {
  public:
    void animalSound() {
      cout << "The cat says: meow meow"<<endl;
    }
};

// here we are using polymorphism. 'animalSound' method is changing its character in every child class.