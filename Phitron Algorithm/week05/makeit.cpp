#include <bits/stdc++.h>
using namespace std;

bool solve(int x, int target, vector<int> &dp)
{
    if (x == target)
    {
        return true;
    }
    if (x > target)
    {
        return false;
    }
    if (dp[x] != -1)
    {
        return dp[x];
    }
    bool op1 = false, op2 = false;
    if (target >= x + 3)
    {
        op1 = solve(x + 3, target, dp);
    }
    if (target >= x * 2)
    {
        op2 = solve(x * 2, target, dp);
    }

    return dp[x] = op1 || op2;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int target;
        cin >> target;
        vector<int> dp(target + 1, -1);
        cout << (solve(1, target, dp) ? "YES" : "NO") << endl;
    }

    return 0;
}
