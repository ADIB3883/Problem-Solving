///https://leetcode.com/problems/next-permutation/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());
    }
};

int main() {
    vector<int> nums = {1, 2, 3}; // sample input
    Solution obj;
    obj.nextPermutation(nums);
    cout << "Next Permutation: ";
    for(int x : nums) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}

