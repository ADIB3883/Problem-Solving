///https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMinDiff(vector<int>& a, int m) {
        int n = a.size();
        sort(a.begin(), a.end());
        int miu = INT_MAX;
        for(int i = 0; i + m - 1 < n; i++) {
            int diff = a[i + m - 1] - a[i];
            miu = min(miu, diff);
        }
        return miu;
    }
};

int main() {
    vector<int> a = {7, 3, 2, 4, 9, 12, 56}; // sample input
    int m = 3; // number of students
    Solution obj;
    cout << "Minimum difference = " << obj.findMinDiff(a, m) << endl;
    return 0;
}

