#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    string p;
    cin >> n >> p;
    
    // Using manual memory management for the map
    map<char, vector<int> > mp;
    for(int i = 0; i < n; i++) {
        mp[p[i]].push_back(i);
    }
    
    for(auto it = mp.begin(); it != mp.end(); ++it) {
        char ch = it->first;
        vector<int>& v = it->second;
        
        if(v.size() > 2) {
            cout << "YES\n";
            return;
        }
        else if(v.size() == 2) {
            if(v[0] != 0 || v[1] != n-1) {
                cout << "YES\n";
                return;
            }
        }
    }
    
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}