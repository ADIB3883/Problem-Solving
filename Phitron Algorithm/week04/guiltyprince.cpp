#include<bits/stdc++.h>
#define cmp(typ) complex<typ>
#define vsort(vc) sort(vc.begin(),vc.end())
#define vrsort(vc) sort(vc.rbegin(),vc.rend())
#define srev(st) reverse(st.rbegin(),st.rend())
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define Case(a) cout<<"Case "<<a<<": "
#define CaseN(a) cout<<"Case "<<a<<": "
#define psum(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1)
#define pxor(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return x^y;})
#define pgcdLeft(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define pgdcRight(vc,sm) partial_sum(vc.rbegin(),vc.rend(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
const int N=50;  // Updated grid size for constraints
char a[N][N];
bool vis[N][N];
ll n, m;
vector<pair<ll, ll>> d;

// Checks if the given coordinates are within the grid bounds (m rows, n columns)
bool valid(ll i, ll j) {
    return i >= 0 && i < m && j >= 0 && j < n;
}

// BFS to count reachable cells
ll bfs(ll si, ll sj) {
    queue<pair<ll, ll>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    ll cnt = 1;  // Starting cell is already counted

    while (!q.empty()) {
        pair<ll, ll> par = q.front();  // Current cell
        q.pop();

        // Check all 4 directions (up, down, left, right)
        for (ll i = 0; i < 4; i++) {
            ll ci = par.first + d[i].first;   // Update row based on direction
            ll cj = par.second + d[i].second; // Update column based on direction

            // If valid move, not visited, and open cell ('.'), proceed
            if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] == '.') {
                q.push({ci, cj});
                vis[ci][cj] = true;
                cnt++;  // Count this newly visited cell
            }
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;  // Number of test cases
    d.push_back({0, -1}); // Left
    d.push_back({0, 1});  // Right
    d.push_back({-1, 0}); // Up
    d.push_back({1, 0});  // Down
    cin >> t;

    for (ll k = 1; k <= t; k++) {
        ll si, sj;  // Start position
        cin >> n >> m;  // Grid dimensions (columns, rows)

        for (ll i = 0; i < m; i++) {
            for (ll j = 0; j < n; j++) {
                cin >> a[i][j];  // Read the grid
                if (a[i][j] == '@') {
                    si = i; sj = j;  // Start position
                }
            }
        }

        memset(vis, false, sizeof(vis));  // Reset visited array

        ll cnt = bfs(si, sj);  // Run BFS from start position
        cout << "Case " << k << ": " << cnt << '\n';  // Output the number of reachable cells
    }

    return 0;
}
