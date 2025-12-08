/// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int shobcheye_choto = INT_MAX;
        int now_profit = 0;
        int best_profit = 0;

        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < shobcheye_choto) {
                shobcheye_choto = prices[i];
            }
            now_profit = prices[i] - shobcheye_choto;
            if(now_profit > best_profit) {
                best_profit = now_profit;
            }
        }
        return best_profit;
    }
};
int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};  // sample input
    Solution obj;
    cout << obj.maxProfit(prices) << endl;
    return 0;
}
