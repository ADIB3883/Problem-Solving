#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> w(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    
    string passengers;
    cin >> passengers;
    
    // Set for empty rows: sorted by (width, index)
    set<pair<int, int>> emptyRows;
    for (int i = 1; i <= n; i++) {
        emptyRows.insert({w[i], i});
    }
    
    // Set for half-occupied rows: sorted by (-width, index) for largest width first
    set<pair<int, int>> halfOccupiedRows;
    
    vector<int> result;
    
    for (char passenger : passengers) {
        if (passenger == '0') { // Introvert
            // Choose empty row with smallest width
            auto it = emptyRows.begin();
            int row = it->second;
            emptyRows.erase(it);
            
            // Move this row to half-occupied
            halfOccupiedRows.insert({-w[row], row});
            
            result.push_back(row);
        } else { // Extrovert
            // Choose half-occupied row with largest width
            auto it = halfOccupiedRows.begin();
            int row = it->second;
            halfOccupiedRows.erase(it);
            
            // This row is now full (no need to track it)
            
            result.push_back(row);
        }
    }
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) cout << " ";
    }
    cout << "\n";
    
    return 0;
}