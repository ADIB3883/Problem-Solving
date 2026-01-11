#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class student {
    char *n;    // Pointer to store the name
    ll age;

public:
    // Constructor to allocate memory for 'n' using new
    student() {
        n = new char[10];  // Allocate memory for the name using new
    }

    // Destructor to free allocated memory using delete
    ~student() {
        delete[] n;  // Free memory when the object goes out of scope
    }

    // Set the values for name and age
    void setValue() {
        cin >> n >> age;  // Take input for name and age
    }

    // Show the values of name and age
    void showValue() const {
        cout << "Name : " << n << "\nAge : " << age << '\n';
    }
};

int main() {
    student ob[3];  // Array of student objects
    student *p = &ob[0];  // Pointer to the first student object

    // Set values for each student
    for (ll i = 0; i < 3; i++) {
        p->setValue();
        p++;
    }

    p = &ob[0];  // Reset pointer to the start of the array

    // Display values for each student
    for (ll i = 0; i < 3; i++) {
        p->showValue();
        p++;
    }

    return 0;
}
