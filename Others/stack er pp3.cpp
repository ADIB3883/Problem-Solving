#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the queue: ";
    cin >> n;

    queue<int> q1,q2;
    stack<int>s;

    cout << "Enter elements for the Queue:\n";
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
       q1 .push(x);
    }
    while(!q1.empty())
    {
        s.push(q1.front());
        q1.pop();
    }
    while(!s.empty())
    {
        q2.push(s.top());
        s.pop();
    }
    while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }
    cout << endl;

    return 0;
}
