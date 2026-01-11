#include<bits/stdc++.h>
using namespace std;

int main() {
    long long num;
    cin >> num;
    long long int coins[num];

    for(long long i = 0; i < num; i++)
    {
        cin >> coins[i];
    }

    sort(coins, coins + num, greater<int>());

    long long total = 0;
    long long minVal = INT_MAX;

    for(long long i = 0; i < num; i++)
    {
        if(coins[i] >= minVal)
        {
            coins[i] = minVal - 1;
        }

        if(coins[i] > 0)
        {
            total += coins[i];
            minVal = coins[i];
        }
        else
        {
            break;
        }
    }

    cout << total << endl;
    return 0;
}
