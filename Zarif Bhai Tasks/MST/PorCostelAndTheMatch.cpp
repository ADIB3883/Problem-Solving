#include <bits/stdc++.h>
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
#define debug(a) cerr << #a << " : " << (a) << "\n";
#define debuga(a) for(int i=0;i<a.size();i++) cerr<<#a<<"["<<i<<"] "<<a[i]<<"\n";
//constants
const ll M = 1e9 + 7;
const int N = 1e6 + 3;

vector<int> parent;
vector<int> Size;

void init(int n)
{
    parent = vector<int>(n+1);
    Size = vector<int>(n+1);
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        Size[i] = 1;
    }
}

int find_set(int v)
{
    if (v == parent[v])
        return v;
    // path compression
    return parent[v] = find_set(parent[v]); 
}

void unit(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (Size[a] < Size[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        Size[a] += Size[b];
    }
}

//main
int main()
{
    fastio
    freopen("meciul.in", "r", stdin);
    freopen("meciul.out", "w", stdout);
    TT {
        int n, m;
        cin>>n>>m;
        init(2*n);
        for(int i = 0;i<m;i++){
            int u, v;
            cin>>u>>v;
            if(find_set(u)==find_set(v)){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
                unit(u, n+v);
                unit(v, n+u);
            }
        }
    }
}