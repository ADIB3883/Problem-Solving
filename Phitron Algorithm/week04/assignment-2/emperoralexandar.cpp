#include <bits/stdc++.h>
using namespace std;

class E {
public:
    int a, b, w;
    E(int a, int b, int w) : a(a), b(b), w(w) {}
};

bool cmp(E x, E y) {
    return x.w < y.w;
}

vector<int> p, sz;

int f(int x) {
    if (p[x] == x) return x;
    return p[x] = f(p[x]);
}

void u(int a, int b) {
    int ra = f(a);
    int rb = f(b);
    if (ra != rb) {
        if (sz[ra] < sz[rb]) {
            p[ra] = rb;
            sz[rb] += sz[ra];
        } else {
            p[rb] = ra;
            sz[ra] += sz[rb];
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    vector<E> edges;
    for (int i = 0; i < e; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        a--; b--;
        edges.push_back(E(a, b, w));
    }

    p.resize(n);
    sz.resize(n, 1);
    for (int i = 0; i < n; i++) p[i] = i;

    sort(edges.begin(), edges.end(), cmp);

    long long cost = 0, cnt = 0, red = 0;

    for (auto &edge : edges) {
        if (f(edge.a) != f(edge.b)) {
            u(edge.a, edge.b);
            cost += edge.w;
            cnt++;
        } else {
            red++;
        }
    }

    if (cnt != n - 1) {
        cout << "Not Possible" << endl;
    } else {
        cout << red << " " << cost << endl;
    }

    return 0;
}
