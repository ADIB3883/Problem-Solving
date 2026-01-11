#include <bits/stdc++.h>
using namespace std;
const int MAXN = 200005;
int parent[MAXN], comSize[MAXN];
char s[MAXN];
int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void unite(int a, int b) {
    int pa = find(a);
    int pb = find(b);
    if (pa != pb) {
        if (comSize[pa] < comSize[pb]) swap(pa, pb);
        parent[pb] = pa;
       comSize[pa] += comSize[pb];
    }
}
void isolate(int idx) {
    parent[idx] = idx;  
    comSize[idx] = 1;      
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        string str;
        cin >> str;
        int n = str.size();
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            comSize[i] = 1;    
            s[i] = str[i];  
        }
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                unite(i, i - 1);  
        }

        int q;
        cin >> q;
        cout << "Case " << t << ":\n";

        while (q--) {
            int type, idx;
            cin >> type >> idx;

            if (type == 1) {
                cout << comSize[find(idx)] << '\n';
            } 
            else if (type == 2) {
                s[idx] = '#';

                isolate(idx);
                if (idx > 0 && s[idx - 1] != '#') {
                    if (find(idx) == find(idx - 1)) isolate(idx - 1);
                }
                if (idx < n - 1 && s[idx + 1] != '#') {
                    if (find(idx) == find(idx + 1)) isolate(idx + 1);
                }
            }
        }
    }

    return 0;
}
