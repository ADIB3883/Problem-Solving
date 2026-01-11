
#include<bits/stdc++.h>
#define Onii_chan ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define iiint long long
#define uwu '\n'
using namespace std;
int main()
{
    Onii_chan;
    iiint x,y,z, mx = -1e9,mini=1e9;
    cin >> x>>y>>z;
        mx = max(x, mx);
            mx = max(y, mx);
                 mx = max(z, mx);
        mini=min(x,mini);
           mini=min(y,mini);
             mini=min(z,mini);
    cout <<mini<<" "<<mx << uwu;
    return 0;
}
