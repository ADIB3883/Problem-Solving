
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int q, type, x;
    cin >> q;
    vector<ll> arr;
    unordered_map<ll, ll> freq;
while (q--) {
        cin >> type;
        if (type == 1) {
            cin >> x;
            arr.push_back(x);
            freq[x]++;
        }
        else if (type == 2) {
            if (arr.empty()) {
                cout << "empty" << '\n';
            }
            else {
                ll maxFreq = 0;
                ll maxNum = -1;
                for (const auto& p : freq) {
                    ll num = p.first;
                    ll count = p.second;
                    if (count > maxFreq || (count == maxFreq && num > maxNum)) {
                        maxFreq = count;
                        maxNum = num;
                    }
                }
                cout << maxNum << '\n';
                ll removeCount = min(maxFreq, 2);
                vector<ll> newArr;
                ll occurrencesRemoved = 0;
                for (ll i = 0; i < arr.size(); i++) {
                    if (arr[i] != maxNum) {
                        newArr.push_back(arr[i]);
                    } else if (occurrencesRemoved < removeCount) {
                        occurrencesRemoved++;
                    } else {
                        newArr.push_back(arr[i]);
                    }
                }
                arr = newArr;
                freq[maxNum] -= occurrencesRemoved;
                if (freq[maxNum] == 0) {
                    freq.erase(maxNum);
                }
            }
        }
    }
    return 0;
}
