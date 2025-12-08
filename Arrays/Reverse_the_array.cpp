///https://www.geeksforgeeks.org/problems/reverse-an-array/1
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int> &arr) {
        reverse(arr.begin(), arr.end());
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5}; // sample input

    Solution obj;
    obj.reverseArray(arr);

    cout << "Reversed Array: ";
    for(int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

