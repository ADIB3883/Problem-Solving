#include <bits/stdc++.h>
//#include "debug.h"
using namespace std;
//define
#define ll long long int
#define ld long double
#define ull unsigned long long
#define pb push_back
#define TT int t; cin >> t; for (int tt = 1; tt <= t; tt++)
#define LO cout << "Case " << tt << ": ";
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define PR(ans) (ans) ? cout << "YES\n" : cout << "NO\n";
#define msort(cont) sort(cont.begin(), cont.end());
//constants
const ll M = 1e9 + 7;
const int N = 1e6 + 3;
//main
int main()
{
    fastio
    int n;
    ll k, cntu=0;
    cin>>n>>k;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    int l = 0, r = 0;
    ll ans = 0;
    unordered_map<int,int>freq;
    while(r<n){
        freq[v[r]]++;
        if(freq[v[r]]==1)cntu++;
        while(cntu>k){
            freq[v[l]]--;
            if(freq[v[l]]==0)cntu--;
            l++;
        }
        ans = ans+(r-l+1);
        r++;
    }
    cout<<ans;
}