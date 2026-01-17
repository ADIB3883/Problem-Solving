
#include <bits/stdc++.h>
using namespace std;

class student {
    int id;
    char* name;
public:
    student(const char* p, int q) {
        id = q;
        name = new char[strlen(p) + 1];  // Allocate memory including space for null terminator
        strcpy(name, p);
        cout << "Constructing: " << name << endl;
    }

    student(const student &obj) {
        id = obj.id;
        name = new char[strlen(obj.name) + 1];  // Allocate memory including space for null terminator
        strcpy(name, obj.name);
        cout << "Copy Constructing: " << name << endl;
    }

    student& operator=(const student &obj) {  // Copy assignment operator
        if (this != &obj) {  // Self-assignment check
            delete[] name;  // Free existing resource
            id = obj.id;
            name = new char[strlen(obj.name) + 1];  // Allocate memory including space for null terminator
            strcpy(name, obj.name);
        }
        return *this;
    }

    ~student() {
        cout << "Destructing: " << name << endl;
        delete[] name;
    }

    int getId() { return id; }
};

student func(student st) {
    student tmp("temp", 3);
    return tmp;
}

int main() {
    student st1("St1", 1), st2("st2", 2);
    student st3 = st1;  // Copy constructor is called here
    st3 = func(st1);  // Copy assignment operator is called here
    cout << "Finish" << endl;
}




