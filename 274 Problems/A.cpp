#include <bits/stdc++.h>
using namespace std;
int toMinutes(const string& time) {
    int h = stoi(time.substr(0, 2));
    int m = stoi(time.substr(2, 2));
    return h * 60 + m;
}
string toTimeStr(int minutes) {
    int h = minutes / 60;
    int m = minutes % 60;
    char buffer[5];
    sprintf(buffer, "%02d%02d", h, m);
    return string(buffer);
}
int roundDown(int minutes) {
    return minutes / 5 * 5;
}
int roundUp(int minutes) {
    return (minutes + 4) / 5 * 5;
}
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> intervals;

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        string startStr = s.substr(0, 4);
        string endStr = s.substr(5, 4);
        int start = roundDown(toMinutes(startStr));
        int end = roundUp(toMinutes(endStr));
        intervals.emplace_back(start, end);
    }
    sort(intervals.begin(), intervals.end());
    vector<pair<int, int>> result;
    for (auto& iv : intervals) {
        if (result.empty() || result.back().second < iv.first) {
            result.push_back(iv);
        } else {
            result.back().second = max(result.back().second, iv.second);
        }
    }
    for (auto& iv : result) {
        cout << toTimeStr(iv.first) << "-" << toTimeStr(iv.second) << "\n";
    }
    return 0;
}
