#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool dp[10001];
// Print items
void printItem(ll n)
{
    cout << "==================================================" << endl;
    for(ll i = 1; i <= n; i++)
    {
        cout<<i<<"->" << dp[i] <<"|"  << endl;
    }
    cout << "\n==================================================" << endl;
}

// 0-1 Knapsack Function
bool coinEx(ll w, vector<ll>& coins)
{
    dp[0]=true;
    for(ll i = 1; i <= w; i++)
    {
        dp[i]=false;
        for(ll j = 0; j <= coins.size(); j++)
        {
           if(i>=coins[j])
           {
                dp[i]|=dp[i-coins[j]];
           }
        }
    }
    return dp[w];  // Return maximum profit
}

// Main function
int main()
{
    vector<ll> coins;
    cout << "Number of coins: ";
    ll c,w;
    cin >> c;
  //  vector<ll> values;
//    vector<ll> weights;

    for(ll i = 1; i <= c; i++)
    {
        ll value, weight;
        cout << "Enter coins of " ;
        cin >> value;
        coins.push_back(value);
        //weights.push_back(weight);
    }
cout<<"Enter the amount:";
cin>>w;


    bool profit = coinEx(w,coins);
    cerr << boolalpha << profit << endl;
        printItem(w);
   // cout << "Possible: " << profit << endl;

    return 0;
}
