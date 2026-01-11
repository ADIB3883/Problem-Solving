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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int c=1e9;
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]==arr[i-1] && arr[i]!=arr[i+1])
            {
                if((arr[i+1]-arr[i])<c) c=arr[i+1]-arr[i];
            }
              else  if(arr[i]!=arr[i-1] && arr[i]==arr[i+1])
            {
                if((arr[i]-arr[i-1])<c) c=arr[i]-arr[i-1];
            }
            else   if(arr[i]==arr[i-1] && arr[i]==arr[i+1])
            {
                c=0;
            }
            else  if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1])
            {
                if((arr[i+1]-arr[i]+arr[i]-arr[i-1])<c) c=arr[i+1]-arr[i-1];
            }
        }
        cout<<c<<endl;


    }
}
