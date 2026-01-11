#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
void printVec(vector<pair<int,int>>&v)
{
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<< v[i].second<<" ";
           cout<<endl;
    }
    cout<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    vector<pair<int,int>>v;
        printVec(v);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printVec(v);

    return 0;
}

