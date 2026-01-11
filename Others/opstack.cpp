#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n;


    queue<int> q,q1,q2;
        cout << "Enter the size of the queue: ";
    cin >> n;

    cout << "Enter elements for the Queue 1:\n";
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
       q1 .push(x);
    }
      cout << "Enter the size of the queue: ";
    cin >> m;

    cout << "Enter elements for the Queue 2:\n";
    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
       q2 .push(x);
    }
   while(!q1.empty())
   {
       q.push(q1.front());
       q1.pop();
   }
   while(!q2.empty())
   {
       q.push(q2.front());
       q2.pop();
   }
   cout<<endl<<"After merging"<<endl;
   while(!q.empty())
   {
       cout<<q.front()<<" ";
       q.pop();
   }
    cout << endl;

    return 0;
}

