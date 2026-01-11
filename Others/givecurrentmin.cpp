
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        int w;
        cin >> w;
        pq.push(w);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int w;
        cin >> w;
        if (w == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            cout<<pq.top()<<endl;
        }
        else if (w == 1)
        {
            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty" << endl;
        }
        else
        {
            if (!pq.empty())
            {
                pq.pop();
                // cout<<pq.top()<<endl;
                if (!pq.empty())
                    cout << pq.top() << endl;
                else
                    cout << "Empty" << endl;
            }
            else
                cout << "Empty" << endl;
        }
    }
}
