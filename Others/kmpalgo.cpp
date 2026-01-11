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
void computeLPS(string &pat,vector<ll>&lps)
{
    ll m=pat.size();
    lps[0]=0;
    ll len=0;
    ll i=1;
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
            if(len!=0)
            {
                len=lps[len-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }
        }
    }
}
void KMP(string &txt,string &pat,vector<ll>&lps)
{
   ll    n=txt.size();
    ll m= pat.size();
    ll i=0;ll j=0;
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
                j=lps[j-1];
            }
        }
        if(j==m)
        {
            cout<<"Found in "<<i-m<<endl;
            j=lps[j-1];
        }
    }
    cout<<endl<<"KMP shikha done,but online e thik i mara khabi"<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    string txt,pat;
    cin>>txt>>pat;
     n=txt.size();
    ll m= pat.size();
    //cout<<m<<endl;
    vector<ll>lps(m);
    computeLPS(pat,lps);
    for(auto it:lps)
   {
        cout<<it<<" ";
    }
    cout<<endl;
    KMP(txt,pat,lps);

    return 0;
}

