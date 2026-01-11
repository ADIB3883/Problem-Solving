#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool f=true;
    int a=0;
    int b=n-1;
    while(a<=b)
    {
        if(arr[i]!=arr[b])
        {
            f=false;
        }
        a++;
        b--;
    }
    if(f==false)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }
}
