
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll knapsack(vector<ll> &wt, vector<ll> &profit, vector<vector<ll>> &dp, ll items, ll capacity)
{
    if (capacity == 0 || items == 0) {
        return 0;
    }
    if (dp[items][capacity] != -1) {
        return dp[items][capacity];
    }
    if (capacity >= wt[items - 1]) {
        int includeItem = profit[items - 1] + knapsack(wt, profit, dp, items - 1, capacity - wt[items - 1]);
        int excludeItem = knapsack(wt, profit, dp, items - 1, capacity);
        return dp[items][capacity] = max(includeItem, excludeItem);
    } else {
        return dp[items][capacity] = knapsack(wt, profit, dp, items - 1, capacity);
    }
}

int main()
{
    ll testCases;
    cin >> testCases;
    for (ll t = 0; t < testCases; t++) {
        ll numItems, maxCapacity;
        cin >> numItems >> maxCapacity;
        vector<ll> wt(numItems);
        vector<ll> profit(numItems);
        for (ll i = 0; i < numItems; i++) {
            cin >> wt[i];
        }
        for (int i = 0; i < numItems; i++) {
            cin >> profit[i];
        }
        vector<vector<ll>> dp(numItems + 1, vector<ll>(maxCapacity + 1, -1));
        cout << knapsack(wt, profit, dp, numItems, maxCapacity) << endl;
    }

    return 0;
}
