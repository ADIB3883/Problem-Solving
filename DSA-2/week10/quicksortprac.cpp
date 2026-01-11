#include <iostream>
#include <vector>
using namespace std;
// Define Student structure
struct Student {
    string name;
    int roll;
    double dsaMarks;
    double cMarks;
    int totalCredits;
};
// Partition function for Quick Sort
int partition(vector<Student>& students, int low, int high) {
    Student pivot = students[high];  // Choosing last element as pivot
    int i = low - 1;
    for (int j = low; j < high; j++) {
        bool shouldSwap = false;

        if (students[j].totalCredits >= 40 && pivot.totalCredits < 40) {
            shouldSwap = true;
        } else if (students[j].totalCredits < 40 && pivot.totalCredits >= 40) {
            shouldSwap = false;
        } else if (students[j].totalCredits >= 40 && pivot.totalCredits >= 40) {
            shouldSwap = (students[j].dsaMarks > pivot.dsaMarks);
        } else {
            shouldSwap = (students[j].cMarks > pivot.cMarks);
        }

        if (shouldSwap) {
            i++;
            swap(students[i], students[j]);
        }
    }

    swap(students[i + 1], students[high]);
    return i + 1;
}

// Quick Sort function
void quickSort(vector<Student>& students, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(students, low, high);
        quickSort(students, low, pivotIndex - 1);
        quickSort(students, pivotIndex + 1, high);
    }
}

int main() {
    int N;
    cin >> N;
    vector<Student> students(N);

    // Taking input
    for (int i = 0; i < N; i++) {
        cin >> students[i].name >> students[i].roll 
            >> students[i].dsaMarks >> students[i].cMarks 
            >> students[i].totalCredits;
    }

    // Sorting using Quick Sort
    quickSort(students, 0, N - 1);

    // Printing sorted student names
    for (const auto &student : students) {
        cout << student.name << endl;
    }

    return 0;
}
