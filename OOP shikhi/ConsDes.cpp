
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    Animal() {
        cout << "Animal constructor called" << endl;
    }

    ~Animal() {
        cout << "Animal destructor called" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    Dog() {
        cout << "Dog constructor called" << endl;
    }

    ~Dog() {
        cout << "Dog destructor called" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    Cat() {
        cout << "Cat constructor called" << endl;
    }

    ~Cat() {
        cout << "Cat destructor called" << endl;
    }
};

int main() {

    Dog dog1;



    Cat cat1;


    return 0;
}
