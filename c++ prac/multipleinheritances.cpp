#include <iostream>
using namespace std;

// Base class 1
class Animal {
  public:
    void eat() {
      cout << "Animal eats" << endl;
    }
};

// Base class 2
class Mammal {
  public:
    void breathe() {
      cout << "Mammal breathes" << endl;
    }
};

// Derived class using multiple inheritance
class Dog: public Animal, public Mammal {
  public:
    void bark() {
      cout << "Dog barks" << endl;
    }
};

int main() {
  // Create an object of the derived class
  Dog myDog;

  // Call the methods of the base classes
  myDog.eat();
  myDog.breathe();

  // Call the method of the derived class
  myDog.bark();

  return 0;
}
