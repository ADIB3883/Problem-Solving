#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
void printVec(vector<int>&v)
{
    cout<<"Size:"<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    v.push_back(2);
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    vector<int>v(10,3);
    v.push_back(7);
    v.push_back(6);
    printVec(v);
    vector<int>v2=v;
    v2.push_back(5);
    printVec(v2);
    printVec(v2);
    printVec(v2);
    return 0;
}


