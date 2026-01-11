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
        string p,q;
        cin>>p;
        q="";
        stack<char>low,up;
        for(i=p.size()-1;i>-1;i--)
        {
            if(p[i]=='b')
            {
                low.push(p[i]);
            }
            else if(p[i]=='B')
            {
                up.push(p[i]);
            }
            else
            {
                if(p[i]>='a' && p[i]<='z')
                {
                    if(!low.empty())
                    {
                        low.pop();
                    }
                    else
                    {
                        q+=p[i];
                    }
                }
                else if(p[i]>='A' && p[i]<='Z')
                {
                    if(!up.empty())
                    {
                        up.pop();
                    }
                    else
                    {
                        q+=p[i];
                    }
                }
            }
        }
        reverse(q.begin(),q.end());
        cout<<q<<'\n';

    }
    return 0;
}

