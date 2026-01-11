#include <bits/stdc++.h>
using namespace std;
#define granite_state ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long
#define line cout << "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define vsb (v).begin(),(v).end()
#define vse (v).rbegin(),(v).rend()
#define spc " "
#define pb push_back
#define pf push_front;

vector<string> colors = {"Red", "Yellow", "Green", "Blue"};

bool is_safe(vector<vector<int>>&adj,int node,vector<int>&clr,int col)
{
      for(auto x:adj[node])
      {
          if(clr[x]==col) return false;
      }
      return true;
}
bool backtracking(int node,int n,vector<vector<int>>&adj,vector<int>&clr)
{
    if(node>n) return true;
    for(int i=0;i<4;i++)
    {
         if(is_safe(adj,node,clr,i))
         {
              clr[node] = i;
              if(backtracking(node+1,n,adj,clr)) return true;
              clr[node] = -1;
         }
    }
    return false;
}
signed main()
 {
    granite_state
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>>edg(e);
    for(int i=0;i<e;i++)
    {
         int a,b;
         cin>>a>>b;
         edg[i] = {a,b};
    }
    vector<vector<int>>adj(n+1);
    for(int i=0;i<e;i++)
    {
         adj[edg[i].first].push_back(edg[i].second);
         adj[edg[i].second].push_back(edg[i].first);
    }
    vector<int>clr(n+1,-1);
    if(backtracking(1,n,adj,clr))
    {
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" ---> "<<colors[clr[i]]<<endl;
        }
    }
    else
    cout<<"NO"<<endl;
}

    ////////////////////////////////////////////////////
    //                                                 //
    //                 A                               //
    //                                                 //
    //                 L                               //
    //                                                 //
    //                 I                               //
    //                                                 //
    //                 F                               //
    /////////////////////////////////////////////////////
//think simply, it's always easier than it seems at first
    //PEN AND PAPER instead of ms paint
    //keep at it even if it feels exhausting(we're not doing this for fun anymore)
    //2 GHONTAR AGER EDITORIAL DHORBI NA