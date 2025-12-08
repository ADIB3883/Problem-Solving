///https://leetcode.com/problems/maximum-subarray/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int best = INT_MIN, cur = 0;
        for(int i = 0; i < n; i++)
        {
            cur = max(nums[i], cur + nums[i]); 
            best = max(best, cur);
        }
        return best;
    }
};

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; // sample input
    Solution obj;
    cout << "Maximum Subarray Sum = " << obj.maxSubArray(nums) << endl;
    return 0;
}
