#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    pair<int,string>p;
    //p=make_pair(2,"abc");
    p={2,"abc"};
    pair<int,string>&p1=p;
    p1.first=5;
    p1.second="skjcbsicxbs";
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,int>p_array[3];
    p_array[0]={2,1};
    p_array[1]={4,3};
    p_array[2]={6,5};
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    return 0;
}

