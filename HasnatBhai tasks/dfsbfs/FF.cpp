#include<bits/stdc++.h>
#define ll long long
using namespace std;

int vis[9][9];
int dist[9][9];
int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[] = {-1, 1, -1, 1, 2, -2, 2, -2};

bool valid(int x, int y) {
    return x >= 1 && x <= 8 && y >= 1 && y <= 8;
}

void bfs(int sx, int sy) {
    memset(vis, 0, sizeof(vis));
    memset(dist, 0, sizeof(dist));
    queue<pair<int, int>> q;
    vis[sx][sy] = 1;
    dist[sx][sy] = 0;
    q.push({sx, sy});

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (valid(nx, ny) && !vis[nx][ny]) {
                vis[nx][ny] = 1;
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
}

pair<int, int> chess_to_coords(string s) {
    // 'a' = 1, ..., 'h' = 8; '1' = 1, ..., '8' = 8
    return {s[1] - '0', s[0] - 'a' + 1};
}

void solve() {
    string start, end;
    cin >> start >> end;
    auto [sx, sy] = chess_to_coords(start);
    auto [ex, ey] = chess_to_coords(end);
    bfs(sx, sy);
    cout << dist[ex][ey] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
