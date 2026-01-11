#include <bits/stdc++.h>
#define cmp(typ) complex<typ>
#define vsort(vc) sort(vc.begin(), vc.end())
#define vrsort(vc) sort(vc.rbegin(), vc.rend())
#define srev(st) reverse(st.rbegin(), st.rend())
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define yes cout << "yes\n"
#define no cout << "no\n"
#define Case(a) cout << "Case " << a << ":"
#define CaseN(a) cout << "Case " << a << ":"
#define psum(vc, sm) partial_sum(vc.begin(), vc.end(), sm.begin() + 1)
#define pxor(vc, sm) partial_sum(vc.begin(), vc.end(), sm.begin() + 1, [](LL x, LL y) { return x ^ y; })
#define pgcdLeft(vc, sm) partial_sum(vc.begin(), vc.end(), sm.begin() + 1, [](LL x, LL y) { return __gcd(x, y); })
#define pgdcRight(vc, sm) partial_sum(vc.rbegin(), vc.rend(), sm.begin() + 1, [](LL x, LL y) { return __gcd(x, y); })
#define ll long long int
#define dub double
#define dubb long double
#define pi acos(-1)
#define nl '\n'
using namespace std;
void solve()
{
    ll i, j, k, n, m, c,a,b,d,s = 0, f = 0, t, x, y, z;
    string p;
    cin >> n;
    vector<ll> v1(4), v2(4), v3(4), v4(4), v5(4);
    for (i = 0; i < 4; i++)
    {
        cin >> v1[i];
    }
    for (i = 0; i < 4; i++)
    {
        cin >> v2[i];
    }
    for (i = 0; i < 4; i++)
    {
        cin >> v3[i];
    }
    for (i = 0; i < 4; i++)
    {
        cin >> v4[i];
    }
    for (i = 0; i < 4; i++)
    {
        cin >> v5[i];
    }
    vector<ll> v(n);
    vector<vector<ll>> sol(n, vector<ll>(20));
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        for (j = 0; j < 20; j++)
        {
            cin >> sol[i][j];
        }
    }
    a=v1[0];
    a--;
    b=v1[1];
    b--;
    c=v1[2];
    c--;
    d=v1[3];
    d--;
    ll ans = 0;
    ll sum ;
    ll mini = 1e18;
    for(i=0;i<n;i++)
    {
        sum=0;
        //cout<<sol[i][a]<<sol[i][b]<<sol[i][c]<<sol[i][d];
        sum+=sol[i][a]+sol[i][b]+sol[i][c]+sol[i][d];
       // cout<<" sum: "<<sum;
   
        if(sum<mini)
        {
            y=i;
        }
             mini=min(mini,sum);
    }

    vector<ll>viu;
    viu.push_back(v[y]);
    //cout<<mini<<'\n';
    ans+=mini;
        a=v2[0];
    a--;
    b=v2[1];
    b--;
    c=v2[2];
    c--;
    d=v2[3];
    d--;
     mini = 1e18;
    for(i=0;i<n;i++)
    {
        sum=0;
       // cout<<sol[i][a]<<sol[i][b]<<sol[i][c]<<sol[i][d];
        sum+=sol[i][a]+sol[i][b]+sol[i][c]+sol[i][d];
        //cout<<" sum: "<<sum;
              if(sum<mini)
        {
            y=i;
        }
             mini=min(mini,sum);
    }
        viu.push_back(v[y]);
    //cout<<mini<<'\n';
    ans+=mini;
        a=v3[0];
    a--;
    b=v3[1];
    b--;
    c=v3[2];
    c--;
    d=v3[3];
    d--;
     sum = 0;
     mini = 1e18;
    for(i=0;i<n;i++)
    {
        sum=0;
        //cout<<sol[i][a]<<sol[i][b]<<sol[i][c]<<sol[i][d];
        sum+=sol[i][a]+sol[i][b]+sol[i][c]+sol[i][d];
       // cout<<" sum: "<<sum;
              if(sum<mini)
        {
            y=i;
        }
             mini=min(mini,sum);
    }
        viu.push_back(v[y]);
    //cout<<mini<<'\n';
    ans+=mini;
        a=v4[0];
    a--;
    b=v4[1];
    b--;
    c=v4[2];
    c--;
    d=v4[3];
    d--;
     sum = 0;
     mini = 1e18;
    for(i=0;i<n;i++)
    {
        sum=0;
        //cout<<sol[i][a]<<sol[i][b]<<sol[i][c]<<sol[i][d];
        sum+=sol[i][a]+sol[i][b]+sol[i][c]+sol[i][d];
       // cout<<" sum: "<<sum;
              if(sum<mini)
        {
            y=i;
        }
             mini=min(mini,sum);
    }
        viu.push_back(v[y]);
    //cout<<mini<<'\n';
    ans+=mini;
        a=v5[0];
    a--;
    b=v5[1];
    b--;
    c=v5[2];
    c--;
    d=v5[3];
    d--;
     sum = 0;
     mini = 1e18;
    for(i=0;i<n;i++)
    {
        sum=0;
        //cout<<sol[i][a]<<sol[i][b]<<sol[i][c]<<sol[i][d];
        sum+=sol[i][a]+sol[i][b]+sol[i][c]+sol[i][d];
       // cout<<" sum: "<<sum;
              if(sum<mini)
        {
            y=i;
        }
             mini=min(mini,sum);
    }
        viu.push_back(v[y]);
    //cout<<mini<<'\n';
    ans+=mini;
    vrsort(viu);
    ans+=viu[0];
    cout<<ans<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}