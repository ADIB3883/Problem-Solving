///https://leetcode.com/problems/contains-duplicate/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        for(int x : nums) {
            st.insert(x);
        }
        int x = nums.size();
        int y = st.size();
        if(x == y) {
            return false;
        } else {
            return true;
        }
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 1}; // sample input

    Solution obj;
    if(obj.containsDuplicate(nums)) {
        cout << "Contains Duplicate" << endl;
    } else {
        cout << "No Duplicate" << endl;
    }

    return 0;
}

