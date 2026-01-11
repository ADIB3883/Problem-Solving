#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        string p;
        cin >> p;

        string w = "100";


        if (p.substr(n - 3, 3) < w) {
            cout << p << '\n';
        } else {

            string u = p.substr(0, n - 3) + w;
            cout << u << '\n';
        }
    }

    return 0;
}
