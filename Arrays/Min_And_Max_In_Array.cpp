/// https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getMinMax(vector<int> &arr) {
        vector<int> lu = arr;
        sort(lu.begin(), lu.end());
        return {lu[0], lu[arr.size() - 1]};
    }
};
int main() {
    vector<int> arr = {3, 7, 1, 9, 4}; // sample input
    
    Solution obj;
    vector<int> ans = obj.getMinMax(arr);

    cout << "Min: " << ans[0] << "\n";
    cout << "Max: " << ans[1] << "\n";

    return 0;
}

