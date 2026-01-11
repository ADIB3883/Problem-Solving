#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,c=0,s=0,f=0,t;
    char x,y;
    cin>>t;
    while(t--)
    {
        string p;
        cin>>p;
        int d=p.size();
        if(d<=10)
        {
            cout<<p<<endl;
        }
        else
        {
            k=p.size();
            n=k-2;
            for(i=0;i<k;i++)
            {
                x=p[0];
                y=p[k-1];
            }
            cout<<x<<n<<y<<endl;
        }

    }
    return 0;
}

