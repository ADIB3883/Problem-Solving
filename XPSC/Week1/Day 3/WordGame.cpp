#include<bits/stdc++.h>
#define cmp(typ) complex<typ>
#define vsort(vc) sort(vc.begin(),vc.end())
#define vrsort(vc) sort(vc.rbegin(),vc.rend())
#define srev(st) reverse(st.rbegin(),st.rend())
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define Case(a) cout<<"Case "<<a<<": "
#define CaseN(a) cout<<"Case "<<a<<": "
#define psum(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1)
#define pxor(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return x^y;})
#define pgcdLeft(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define pgdcRight(vc,sm) partial_sum(vc.rbegin(),vc.rend(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
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
        map<string,vector<ll>>mp;
        cin>>n;
        for(i=1;i<=3;i++)
        {
            for(j=0;j<n;j++)
            {
                string p;
                cin>>p;
                mp[p].push_back(i);
            }
        }
        vector<ll>ans(4,0);
        for(map<string,vector<ll>>::iterator it=mp.begin();it!=mp.end();it++ )
        {
            string word=it->first;
            vector<ll>players=it->second;
            if(players.size()==1)
            {
                ans[players[0]]+=3;
            }
            else if(players.size()==2)
            {
                ans[players[0]]++;
                ans[players[1]]++;
            }
        }
        for(i=1;i<=3;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}

