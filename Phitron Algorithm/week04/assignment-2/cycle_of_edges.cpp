#include<bits/stdc++.h>
using namespace std;

vector<int>parent;
vector<int>component_size;

int find_leader(int node)
{
    if(parent[node] == -1)
    {
        return node;
    }
    int leader = find_leader(parent[node]);
    parent[node] = leader; // Path compression
    return leader;
}

void union_sets(int node_a, int node_b, int &redundant_edges)
{
   int leader_a = find_leader(node_a);
   int leader_b = find_leader(node_b);

    if(leader_a == leader_b)
    {
        redundant_edges++;
        return;
    }

   if(component_size[leader_a] > component_size[leader_b])
   {
       parent[leader_b] = leader_a;
   }
   else if(component_size[leader_b] > component_size[leader_a])
   {
       parent[leader_a] = leader_b;
   }
   else
   {
        parent[leader_a] = leader_b;
        component_size[leader_b]++;
   }
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    parent = vector<int>(nodes, -1);
    component_size = vector<int>(nodes, 1);
    int redundant_edges = 0;

    while(edges--)
    {
       int node_a, node_b;
       cin >> node_a >> node_b;
       node_a--;
       node_b--;

       union_sets(node_a, node_b, redundant_edges);
    }

   cout << redundant_edges;
}
