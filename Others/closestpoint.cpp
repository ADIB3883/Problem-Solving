#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> a(n);
        for(int i=0; i<n; i++) cin >>a[i];

        if(n==2)
        {
            if(a[1]-a[0] > 1)
            {
                cout << "YES" << endl;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }
        }
        else if(n<2)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            cout << "NO" << endl;
            continue;
        }
    }
    return 0;
}
