#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define f(i,a,b) for(int i=a;i<b;i++)
#define in(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define out(a,n) for(int i=0;i<n;i++) cout<<a[i]<<" "
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
signed main(){
fastio
    int t;
    cin>>t;
    while(t--){
        int l,r;cin>>l>>r;
        int k=l;vector<int>v;int i=0;
        while(k<=r){
            v.pb(k);
            i++;
            k+=i;
        }
        cout<<v.size()<<endl;
    }
    return 0;
}
