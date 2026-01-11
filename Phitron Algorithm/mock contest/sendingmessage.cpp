#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;

    while (cin >> str1 >> str2)
    {
        int idx1 = 0, idx2 = 0;

        while (idx1 < str1.size() && idx2 < str2.size())
        {
            if (str1[idx1] == str2[idx2])
            {
                idx2++;
            }
            idx1++;
        }

        if (idx2 == str2.size())
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }

    return 0;
}
