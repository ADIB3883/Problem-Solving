#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,c=0,s=0,f=0;
    char x,y,z;
    string p;
    cin>>p;
    ll d=p.size();
    for(i=0;i<d;i++)
    {
              if(p[i]>='a' && p[i]<='z')
        {
            x=toupper(p[i]);
            cout<<x;
        }
        else    if(p[i]>='A' && p[i]<='Z')
        {
          y=towlower(p[i]);
            cout<<y;
        }
        else if(p[i]==',')
        {
        cout<<" ";

        }
    }
    return 0;
}

