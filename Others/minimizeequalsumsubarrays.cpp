#include <bits/stdc++.h> // Include every standard library
using namespace std;
#define pb push_back
typedef vector<int> vi;
typedef vector<long> vl;
typedef long long ll;
typedef pair<int, int> pi;
#define loopi(i,n) for(int i=0;i<n;i++)
#define loopl(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
// LONG_LONG_MAX = 9223372036854775807;
// INT_MAX = 2147483647;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        int last =0;
        cin>>last;
        for(int i=0;i<n-1;i++){
            cin>>a[i];
        }

        a[n-1]=last;

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}
