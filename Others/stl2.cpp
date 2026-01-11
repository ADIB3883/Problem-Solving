#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
void printVec(vector<int>v)
{
    cout<<"Size:"<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    vector<int>v;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        printVec(v);
        v.push_back(x);
    }
    printVec(v);


    return 0;
}

