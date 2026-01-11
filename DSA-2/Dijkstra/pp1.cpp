#include <bits/stdc++.h>

using namespace std;

const int N = 100;

vector<pair<int, int>> v[N];

int dis[N];
bool vis[N];
int par[N];
class Edge
{
public:
    int u, v, c,t;
    Edge(int u, int v, int c,int t)
    {
        this->u = u;
        this->v = v;
        this->c = c;
        this->t=t;
    }
};
class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(int src)

{

    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
  pq.push({src, 0});
    dis[src] = 0;
// vis[src]=true;
par[src]=-1;

    while (!pq.empty())

    {
        pair<int, int> parent = pq.top();
           pq.pop();

        int node = parent.first;

        int cost = parent.second;
        vis[node]=true;

vector<Edge>edgeList
        for (edge ed: edgeList)

        {
 int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if(vis[v])continue;

            if (dis[v] + childCost < dis[] && )

            {
                // vis[childNode]=true;

                // path relax
                par[childNode]=node;

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
        vector<Edge> EdgeList;
    while (e--)
    {
        int u, v, c,t;
        cin >> u >> v >> c >> t;
        EdgeList.push_back(Edge(u, v, c,t));
    }

    for (int i = 1; i <= n; i++)

    {

        dis[i] = INT_MAX;
        vis[i]=false;
        par[i]=-1;
    }

    dijkstra(1);

    for (int i = 1; i <= n; i++)

    {
        if(dis[i]==INT_MAX)
        {
            cout<<i<<"-> INF"<<endl;
        }
else cout << i << "-> " << dis[i] << endl;
    }
if(w>t)
{
    cout<<"No path exists"<<endl;
}

    return 0;
}
