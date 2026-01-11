#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
bool vis[N];
vector<int>adj[N];
//int parentArray[N];
bool pathVisit[N];
bool ans;
void dfs(int parent)
{
    vis[parent]=true;
    pathVisit[parent]=true;
            for(int child:adj[parent])
        {
            if(pathVisit[child])
            {
                ans=true;
            }
            if(!vis[child])
            {
                //parentArray[child]=parent;
                dfs(child);
                }
}
pathVisit[parent]=false;
}
int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    memset(vis,false,sizeof(vis));
    //memset(parentArray,-1,sizeof(parentArray));
    memset(pathVisit,false,sizeof(pathVisit));
    ans=false;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }

    }
        if(ans)cout<<"Cycle Found";
        else cout<<"Cycle not found";


}
