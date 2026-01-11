#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,t=1;
    while(t--)
    {

        string p1;
        string p2;
        cin>>p1;
        cin>>p2;
        ll p=0;
        ll q=0;
        ll a=p1.size();
        ll b=p2.size();
        string w1="AtCoder";
        string w2="Land";
        for(i=0;i<a;i++)
        {
            if(p1[i]==w1[i])
            {
                p=0;
            }
            else
            {
                p++;
            }

        }
             for(i=0;i<b;i++)
        {
            if(p2[i]==w2[i])
            {
                q=0;
            }
            else
            {
                q++;
            }

        }
        if( p==0 && q==0)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
    return 0;
}

