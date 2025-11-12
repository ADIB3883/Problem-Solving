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
        unordered_map<int,int>nuu;
        for(int i=0;i<nums.size();i++)
        {
            int comp=target-nums[i];
            if(nuu.find(comp)!=nuu.end())
            {
                return {nuu[comp],i};
            }
            nuu[nums[i]]=i;
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
