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
const ll mxx = 1e7 + 3;
vector<ll>primes;
ll spf[mxx];
bitset<mxx>isPrime;
///time complexity O(nlog(logn)) or, O(5*n) or, O(n)
void spff()
{
    for (ll i = 2; i < mxx; i++)
    {
        spf[i] = i;
    }
    // spf[1] =1;
    for (ll i = 2; i *i < mxx; i++)
    {
        if (spf[i]==i)
        {
            for (ll j = i * i; j < mxx; j += i)
            {
                if(spf[j]==j)
                    spf[j] = i;
            }
        }
    }
}
void sieve()
{
    for (ll i = 2; i < mxx; i++)
    {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i *i < mxx; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j < mxx; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for(ll i=2;i<mxx;i++)
    {
        if(isPrime[i])
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        spff();
    sieve();
    ll n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll arr[n];
        set<ll>primi;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            while(arr[i]>1)
            {
                primi.insert(spf[arr[i]]);
                arr[i]/=spf[arr[i]];
            }
        }
        for(auto it : primes)
        {
            if(primi.find(it)==primi.end())
            {
                cout<<it<<"\n";
                break;
            }
        }
     //   debug(primi);
    }
    return 0;
}

