#include <bits/stdc++.h>
using namespace std;

bool isValidString(const string &s) {
    stack<char> stk;

    for (char ch : s) {
        if (!stk.empty() &&  (stk.top() == '0' && ch == '1')) {
            stk.pop();
        } else {
            stk.push(ch);
        }
    }
    return stk.empty();
}

int main() {
int t;
cin>>t;
while(t--)
{
        string s;
    cin >> s;

    if (isValidString(s)) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}

    return 0;
}

