#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t,x,y,z;
    t=1;
    while(t--)
    {
        cin>>x>>y>>z;
        dubb p=(dubb)x/z;
        if(p<=y)
        {
            cout<<"Yes";
        }
        else{cout<<"No";}
    }
    return 0;
}

