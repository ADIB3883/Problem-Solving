#include<bits/stdc++.h>
using namespace std;

int dp[10001][10001];

// Print items
void printItem(vector<int>& values, vector<int>& weights)
{
    cout << "==================================================" << endl;
    for(int i = 0; i < values.size(); i++)
    {
        cout << i+1 << "th item having value: " << values[i] 
             << " and weight: " << weights[i] << endl;
    }
    cout << "==================================================" << endl;
}

// 0-1 Knapsack Function
int f_knapsack(int n, int w, vector<int>& values, vector<int>& weights)
{
    cout << "Solving 0--1 knapsack" << endl;

    // Initialize DP table
    for(int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;  // Initialize rows
    }
    for(int j = 0; j <= w; j++)
    {
        dp[0][j] = 0;  // Initialize columns
    }

    // Fill DP table
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= w; j++)
        {
            if(weights[i - 1] <= j)  // Check if item can be included
            {
                dp[i][j] = max(dp[i-1][j], 
                               dp[i-1][j - weights[i-1]] + values[i-1]);
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][w];  // Return maximum profit
}

// Main function
int main()
{
    cout << "Number of items: ";
    int n;
    cin >> n;

    cout << "Weight of knapsack: ";
    int w;
    cin >> w;

    vector<int> values;
    vector<int> weights;

    for(int i = 1; i <= n; i++)
    {
        int value, weight;
        cout << "Enter the value and weight of " << i << "th item: ";
        cin >> value >> weight;
        values.push_back(value);
        weights.push_back(weight);
    }

    printItem(values, weights);

    int profit = f_knapsack(n, w, values, weights);
    cout << "Maximum profit: " << profit << endl;

    return 0;
}
