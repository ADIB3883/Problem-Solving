#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll t;
   cin >> t;
   while (t--)
   {
      ll n;
      cin >> n;
      if (n & 1)
      {
         cout << "0" << '\n';
         continue;
      }
      ll k = n / 4;
      k++;
      cout << k << '\n';
   }
}