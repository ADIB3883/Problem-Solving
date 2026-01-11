#include<bits/stdc++.h>
#define Onii_chan ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define iint long long
#define uwu '\n'
using namespace std;
int main()
{
    Onii_chan;
    iint n, k , sum = 0;
    vector<iint> arr;
    cin >> n >> k;
    while(n --)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end(), greater<iint>());
    for(int i = 0 ; i < k ; i ++)
    {
        sum = max(sum, sum + arr[i]);
    }
    cout << sum << uwu;
    return 0;
}
