#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
};

class cmp
{
public:
    bool operator()(const student &a, const student &b)
    {
        if (a.name == b.name)
        {
            return (a.roll < b.roll);
        }

        return (a.name > b.name);
    }
};
int main()
{
      ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    priority_queue<student, vector<student>, cmp> pq;
for (int i = 0; i < t; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        student ob(s, x);
        pq.push(ob);
    }
while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << endl;
        pq.pop();
    }
}
