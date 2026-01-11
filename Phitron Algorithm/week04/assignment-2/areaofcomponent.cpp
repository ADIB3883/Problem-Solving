#include <bits/stdc++.h>
using namespace std;

class Grid {
public:
    int r, c;
    vector<vector<char>> g;
    vector<vector<bool>> vis;
    vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    void init(int rows, int cols) {
        r = rows;
        c = cols;
        g.resize(r, vector<char>(c));
        vis.resize(r, vector<bool>(c, false));
    }

    bool valid(int x, int y) {
        return (x >= 0 && x < r && y >= 0 && y < c);
    }

    int dfs(int x, int y) {
        vis[x][y] = true;
        int sz = 1;

        for (int i = 0; i < 4; i++) {
            int nx = x + dir[i].first;
            int ny = y + dir[i].second;

            if (valid(nx, ny) && g[nx][ny] == '.' && !vis[nx][ny]) {
                sz += dfs(nx, ny);
            }
        }

        return sz;
    }
};

int main() {
    Grid grid;
    int r, c;
    cin >> r >> c;

    grid.init(r, c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> grid.g[i][j];
        }
    }

    int min_sz = INT_MAX;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (grid.g[i][j] == '.' && !grid.vis[i][j]) {
                int sz = grid.dfs(i, j);
                min_sz = min(min_sz, sz);
            }
        }
    }

    cout << (min_sz == INT_MAX ? -1 : min_sz) << endl;

    return 0;
}
