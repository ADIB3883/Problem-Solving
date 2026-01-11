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
    cin>>t;
    while(t--)
    {
        c=0,s=0,f=0;
        string p;
        cin>>p;
        bool q=true;
        for(i=0;i<p.size()-1;i++)
        {
            c=0;
            for(j=i+1;j<p.size();j++)
            {
                if(p[i]==p[j])c++;
            }
            if(c%2==0)q=true;
            else q=false;

        }
        if(q==true)cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}

