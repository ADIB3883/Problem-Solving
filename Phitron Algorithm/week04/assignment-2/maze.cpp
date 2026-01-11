
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, m;
vector<vector<char>> maz;
vector<vector<pair<int, int>>> par;
int startX, startY, exitX, exitY;


vector<pair<int, int>> dir= {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool bfs() {
    queue<pair<int, int>> q;
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    q.push({startX, startY});
    visited[startX][startY] = true;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if (maz[x][y] == 'D') {
            return true;
        }
        for (auto [dx, dy] : dir) {
            int nx = x + dx;
            int ny = y + dy;

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && maz[nx][ny] != '#' && !visited[nx][ny]) {
                visited[nx][ny] = true;
                par[nx][ny] = {x, y};
                q.push({nx, ny});
            }
        }
    }
    return false;
}

void markPath() {
    int x = exitX, y = exitY;

    while (!(x == startX && y == startY)) {
        maz[x][y] = 'X';
        auto [px, py] = par[x][y];
        x = px;
        y = py;
    }
}
int main() {
    cin >> n >> m;
    maz.resize(n, vector<char>(m));
    par.resize(n, vector<pair<int, int>>(m, {-1, -1}));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> maz[i][j];
            if (maz[i][j] == 'R') {
                startX = i;
                startY = j;
            } else if (maz[i][j] == 'D') {
                exitX = i;
                exitY = j;
            }
        }
    }
    if (bfs()) {
        markPath();
    }
maz[exitX][exitY]='D';

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << maz[i][j];
        }
        cout << endl;
    }

    return 0;
}
