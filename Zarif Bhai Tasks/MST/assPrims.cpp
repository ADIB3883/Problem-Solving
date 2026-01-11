#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, e;
    cin >> n >> e >> k;
    //graph,alledges 
    vector<pair<int, int>> g[n+1];
    vector<tuple<int,int,int>>all;
    //creating graph-{vertex,weight} and all edges 
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
        all.push_back({w,u,v});
    }
    //initialising key,par,mst
    int key[n + 1], par[n + 1], mst[n + 1];
    for (int i = 1; i <= n; i++)
    {
        key[i] = INT_MAX;
        par[i] = -1;
        mst[i] = 0;
    }
    /// {weight, vertex};
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    key[1] = 0;
    par[1] = -1;
    //MST edges
    multiset<pair<int,int>>med;
    pq.push({0, 1});
    while (!pq.empty())
    {
        int tmp = pq.top().second;
        pq.pop();
        mst[tmp] = 1;
        //mst edges creation
        if(par[tmp]!=-1)
        {
            med.insert({min(tmp,par[tmp]),max(tmp,par[tmp])});
        }
        //implementing prims
        for (auto it : g[tmp])
        {
            int vertex = it.first;
            int weight = it.second;
            if (mst[vertex] == 0)
            {
                if (weight < key[vertex])
                {
                    key[vertex] = weight;
                    par[vertex] = tmp;
                    pq.push({key[vertex], vertex});
                }
            }
        }
    }
    //vector to store non mst edges
    vector<int>non;
    //finding non mst edges
    for(tuple<int,int,int>&edd: all)
    {
        int w=get<0>(edd);
        int u=get<1>(edd);
        int v=get<2>(edd);
        pair<int,int>ep={min(u,v),max(u,v)};
        if(med.count(ep)==0)
        {
            non.push_back(w);
        }
        else
        {
            //erasing that edge as multiset is used
            med.erase(med.find(ep));
        }

    }
//sort and first k edges sum
int cost = 0;
sort(non.begin(), non.end());
for (int i = 0; i < k; i++)
{
    cost += non[i];
}
cout << cost << '\n';
}
