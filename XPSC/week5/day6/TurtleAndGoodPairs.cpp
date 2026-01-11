#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string x;
        cin >> n >> x;

        vector<pair<int, char>> d(26);
        for (int a = 0; a < 26; a++)
            d[a].second = 'a' + a;

        for (char b : x)
            d[b - 'a'].first++;

        sort(d.rbegin(), d.rend());
        string y(n, ' ');

        int c = 0;
        for (auto &p : d) {
            int a = p.first;
            char b = p.second;
            if (a == 0)
                break;

            for (int i = 0; i < a; i++) {
                if (c >= n)
                    c = 1;

                y[c] = b;
                c += 2;
            }
        }

        cout << y << '\n';
    }
}
