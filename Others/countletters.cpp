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
    string p;
    cin>>p;
    int cnt[26]={0};
    for(i=0;i<p.size();i++)
    {
        int val=p[i]-'a';
        cnt[val]++;
    }
    for(i=0;i<26;i++)
    {
        int b=i+'a';
        char h=b;
        if(cnt[i]!=0)
        {
            cout<<h<<" : "<<cnt[i]<<endl;
        }
        }
    return 0;
}

