#include <bits/stdc++.h>
using namespace std;
const int N = 100;
vector<pair<int, int>> v[N];
int dis[N];
bool vis[N];
int par[N];
class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second < b.second;
    }
};
void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({src, 0});   
    dis[src] = 0;
    // vis[src]=true;
    par[src] = -1;
    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        int node = parent.first;
        int cost = parent.second;
        vis[node] = true;
        for (pair<int, int> child : v[node])
        {
            int childNode = child.first;
            int childCost = child.second;
            if (vis[childNode])
                continue;
            if (dis[node] + childCost < dis[childNode])
            {
                // vis[childNode]=true;
                // path relax
                par[childNode] = node;
                dis[childNode] = dis[node] + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        // v[b].push_back({a, c});
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
        vis[i] = false;
        par[i] = -1;
    }
    dijkstra(1);
    for (int i = 0; i <= n; i++)
    {
        if (dis[i] == INT_MAX)
        {
            cout << i << "-> INF" << endl;
        }
        else
            cout << i << "-> " << dis[i] << endl;
    }
    for (int i = 1; i <= 5; i++)
    {
        cout << par[i] << "->";
    }
    return 0;
}
