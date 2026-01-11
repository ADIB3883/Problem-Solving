#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<vector<int>> D(N, vector<int>(N));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> D[i][j];
    int Q;
    cin >> Q;
    vector<int> P(Q);
    for (int i = 0; i < Q; ++i)
        cin >> P[i];
    vector<vector<int>> S(N + 1, vector<int>(N + 1, 0));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            S[i + 1][j + 1] = D[i][j] + S[i][j + 1] + S[i + 1][j] - S[i][j];
    int maxArea = N * N;
    vector<int> max_sum(maxArea + 1, 0);
    for (int x1 = 0; x1 < N; ++x1) {
        for (int y1 = 0; y1 < N; ++y1) {
            for (int x2 = x1; x2 < N; ++x2) {
                for (int y2 = y1; y2 < N; ++y2) {
                    int area = (x2 - x1 + 1) * (y2 - y1 + 1);
                    int sum = S[x2 + 1][y2 + 1] - S[x1][y2 + 1] - S[x2 + 1][y1] + S[x1][y1];
                    max_sum[area] = max(max_sum[area], sum);
                }
            }
        }
    }
    for (int i = 1; i < maxArea; ++i)
        max_sum[i] = max(max_sum[i], max_sum[i - 1]);
    for (int i = 0; i < Q; ++i) {
        cout << max_sum[P[i]] << "\n";
    }
    return 0;
}
