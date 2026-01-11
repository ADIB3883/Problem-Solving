#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        int numElements;
        cin >> numElements;
        priority_queue<pair<int, int>> maxHeap;

        for (int j = 0; j < numElements; j++) {
            int value;
            cin >> value;
            maxHeap.push({value, j});
        }

        pair<int, int> firstMax, secondMax;
        firstMax = maxHeap.top(); maxHeap.pop();
        secondMax = maxHeap.top(); maxHeap.pop();

        if (firstMax.second > secondMax.second) {
            cout << secondMax.second << " " << firstMax.second << endl;
        } else {
            cout << firstMax.second << " " << secondMax.second << endl;
        }
    }
    return 0;
}
