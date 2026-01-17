#include <iostream>
using namespace std;

class Student {
private:
    int theory;
    int sessional;

public:
    void setMark(int t, int s) {
        theory = t;
        sessional = s;
    }

    int getTheory()  {
        return theory;
    }

    int getSessional()  {
        return sessional;
    }
};

class Result : private Student {
public:
    using Student::setMark;

    // Delegate functions to access the private getTheory() and getSessional() methods
    int getTheoryMark()  {
        return getTheory();
    }

    int getSessionalMark() {
        return getSessional();
    }

    // Method to calculate the result based on theory and sessional marks
    int getResult()  {
        return getTheoryMark() + getSessionalMark();
    }
};

int main() {
    Result r;
    r.setMark(40, 60);       // Setting theory = 40, sessional = 60
    cout << "Theory Mark: " << r.getTheoryMark() << endl;      // Outputs: 40
    cout << "Sessional Mark: " << r.getSessionalMark() << endl; // Outputs: 60
    cout << "Total Result: " << r.getResult() << endl;          // Outputs: 100

    return 0;
}

