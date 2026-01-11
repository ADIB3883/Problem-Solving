#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int x, y, k;
        cin >> x >> y >> k;

        for(int i = 0; i < k - 1; i++) {
            cout << x + i << " " << y + i << '\n';
        }
        int fx = x * k - ((k - 1) * (k - 2)) / 2;
        int fy = y * k - ((k - 1) * (k - 2)) / 2;
        cout << fx << " " << fy << '\n';
    }

    return 0;
}

