#include <bits/stdc++.h>
using namespace std;

bool solve(int n, vector<int> &arr, vector<vector<int>> &dp, int sum)
{
    if (sum == 0)
    {
        return true;
    }
    if (n == 0 || sum < 0)
    {
        return false;
    }
    if (dp[n][sum] != -1)
    {
        return dp[n][sum];
    }
    if (sum >= arr[n - 1])
    {
        return dp[n][sum] = solve(n - 1, arr, dp, sum - arr[n - 1]) || solve(n - 1, arr, dp, sum);
    }
    else
    {
        return dp[n][sum] = solve(n - 1, arr, dp, sum);
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            sum += arr[j];
        }
        if (sum % 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            vector<vector<int>> dp(n + 1, vector<int>(sum / 2 + 1, -1));
            cout << (solve(n, arr, dp, sum / 2) ? "YES" : "NO") << endl;
        }
    }

    return 0;
}
