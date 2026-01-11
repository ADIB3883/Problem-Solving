#include<bits/stdc++.h>
using namespace std;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string p;
    cin>>p;
    p[0]=tolower(p[0]);
    reverse(p.begin(),p.end());
    cout<<p<<endl;
    return 0;
}

