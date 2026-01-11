#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        vector<string>v;
        vector<int>indtr;
        int maxi = INT_MIN;
        string ans;
        while (ss >> word)
        {
            auto it = find(v.begin(),v.end(),word);
            if(it!=v.end())
            {
                int inx = it-v.begin();
                indtr[inx]++;
                if(indtr[inx]>maxi)
                {
                    maxi = indtr[inx];
                    ans = word;
                }
            }
            else
            {
                v.push_back(word);
                indtr.push_back(1);
                if(1>maxi)
                {
                    maxi = 1;
                    ans = word;
                }

            }
        }
        cout<<ans<<" "<<maxi<<'\n';
    }
}
