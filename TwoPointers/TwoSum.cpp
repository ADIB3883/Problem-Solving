// Platform: LeetCode
// Problem: 1. Two Sum
// Difficulty: Easy
// Topics: Array, Two Pointers, Sorting
// Link: https://leetcode.com/problems/two-sum/
// Author: Md. Iftehajul Hoque

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> nuu;
        for(int i = 0; i < nums.size(); i++) {
            nuu.push_back({nums[i], i});
        }
        sort(nuu.begin(), nuu.end());
        int left = 0, right = nums.size() - 1;
        while(left < right) {
            int sum = nuu[left].first + nuu[right].first;
            if(sum == target)
                return {nuu[left].second, nuu[right].second};
            else if(sum < target)
                left++;
            else
                right--;
        }
        return {};
    }
};

// For local testing (won’t run on LeetCode)
int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = sol.twoSum(nums, target);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}
