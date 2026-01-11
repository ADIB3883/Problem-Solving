#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int j=0;
        for(int i=0;i<n;i++)
        {
            a[j]=arr[i];
            j++;
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            int s=a[j]-arr[i];
            int p=abs(s);
            cout<<s<<" ";
        }
    }
}
