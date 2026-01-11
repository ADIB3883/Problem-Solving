#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll mxx = 1e8 + 3;
vector<ll> primes;
bitset<mxx> isPrime;
void sieve()
{
    isPrime.set();
 //   isPrime[0] = isPrime[1] = 0;
    for (ll i = 2; i * i <= mxx; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <=mxx; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }
    for (ll i = 2; i < mxx; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
}
void solve()
{
    ll syz = primes.size();
    for (ll i = 0; i < syz; i += 100)
    {
        cout << primes[i] << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
