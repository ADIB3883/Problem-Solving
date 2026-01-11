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
const int N=1e5+5;
char a[50][50];
bool vis[50][50];
ll dis[50][50];
ll n;
vector<pair<ll,ll> >d;

// Checks if the given coordinates are within the grid bounds
bool valid(ll i, ll j) {
    return i >= 0 && i < n && j >= 0 && j < n;
}

void bfs(ll si, ll sj) {
    queue<pair<ll,ll>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty()) {
        pair<ll,ll> par = q.front();  // Current cell
        q.pop();

        // Check all 4 directions (up, down, left, right)
        for (ll i = 0; i < 4; i++) {
            ll ci = par.first + d[i].first;   // Update row based on direction
            ll cj = par.second + d[i].second; // Update column based on direction

            // If valid move, not visited, and not blocked ('T'), proceed
            if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] != 'T') {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[par.first][par.second] + 1; // Update distance
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll i, j;
    d.push_back({0, -1}); // Left
    d.push_back({0, 1});  // Right
    d.push_back({-1, 0}); // Up
    d.push_back({1, 0});  // Down

    while (cin >> n) {  // Continue until EOF or end of input
        ll si, sj, di, dj;  // Start and end positions
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                cin >> a[i][j];  // Read the grid
                if (a[i][j] == 'S') {
                    si = i; sj = j;  // Start position
                }
                if (a[i][j] == 'E') {
                    di = i; dj = j;  // End position
                }
            }
        }

        memset(vis, false, sizeof(vis));  // Reset visited array
        memset(dis, -1, sizeof(dis));     // Reset distance array (-1 for unreachable)
        bfs(si, sj);  // Run BFS from start position

        cout << dis[di][dj] << '\n';  // Output the distance to the end position
    }

    return 0;
}
