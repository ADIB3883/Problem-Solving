#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        for (int i = 0; i < k/2; i++)
        {
            cout << x-i-1 << " " << y-i-1 <<'\n';
        }
        for (int i = 0; i < k/2; i++)
        {
            cout << x+i+1 << " " << y+i+1 <<'\n';
        }
        if (k%2) cout << x << " " << y <<'\n';
    }

    return 0;
}
