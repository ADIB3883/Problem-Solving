#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<pair<int, int>> arr(n);
    map<int, vector<int>> colorGroups;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
        colorGroups[arr[i].second].push_back(arr[i].first);
    }
    for (auto& group : colorGroups) {
        vector<int>& values = group.second;
        for (int i = 1; i < values.size(); i++) {
            if (values[i] < values[i-1]) {
                cout << "NO\n";
                return 0;
            }
        }
    }
    
    cout << "YES\n";
    return 0;
}