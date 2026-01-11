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
#define Case(a) cout<<"Case "<<a<<":"
#define CaseN(a) cout<<"Case "<<a<<":"
#define psum(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1)
#define pxor(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return x^y;})
#define pgcdLeft(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define pgdcRight(vc,sm) partial_sum(vc.rbegin(),vc.rend(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define ll long long int
#define dub double
#define dubb long double
#define pi acos(-1)
#define nl '\n'
using namespace std;
vector<ll>lps;
string txt,pat;
ll m,n;
void lps_calc()
{
    ll i=1,len=0;
    while(i<m)
    {
        if(pat[i]==pat[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len==0)
            {
                i++;
            }
            else
            {
                len=lps[len-1];
            }
        }
    }
}
bool kmp()
{
    m=pat.length();
    n=txt.length();
    lps.assign(m,0);
    lps_calc();
    ll i=0,j=0;
    vector<ll>v;
    while(i<n)
    {
        if(txt[i]==pat[j])
        {
            i++;
            j++;
        }
        else
        {
            if(j==0)
            {
                i++;
            }
            else
            {
                j= lps[j-1];
            }
        }
        if(j==m)
        {
            return true;
            j=lps[j-1];
        }
    }
    return false;
}
void solve() {
   ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
   string p;
   cin>>p;
   vector<string>v(5),ans;
   for(auto &x : v)
   {
    cin>>x;
   }
   sort(v.begin(),v.end());
   string w="";
   for(i=0;i<5;i++)
   {
    for(auto x : v[i])
    {
        w.push_back(x);
    }
   }
   ans.push_back(w);
   while(next_permutation(v.begin(),v.end()))
   {
    w="";
    for(i=0;i<5;i++)
    {
     for(auto x : v[i])
     {
         w.push_back(x);
     }
    }
    ans.push_back(w);
   }
   txt=p;
   bool fl=false;
   for(auto x: ans)
   {
    pat=x;
    fl=kmp();
    if(fl)
    {
        break;
    }
   }
   if(fl)
   {
    cout<<"Nooo, la polizzia\n";
   }
   else
   {
    cout<<"Sargento Camelas, Gracias!\n";
   }
}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll t;
   t=1;
   //cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}