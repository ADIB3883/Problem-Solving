///https://leetcode.com/problems/search-in-rotated-sorted-array/description/
///When an array is rotated and sorted, one part of the array is always sorted, and the other part contains the pivot (the rotated part)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(nums[mid] == target) return mid;

            // left half sorted
            if(nums[mid] >= nums[start]) {
                if(target >= nums[start] && target < nums[mid]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
            // right half sorted
            else {
                if(target > nums[mid] && target <= nums[end]) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2}; // sample rotated array
    int target = 0;
    Solution obj;
    int index = obj.search(nums, target);
    if(index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found" << endl;
    return 0;
}

