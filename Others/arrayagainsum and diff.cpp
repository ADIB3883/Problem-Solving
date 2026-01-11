#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r,l;
        cin>>n>>r>>l;
        int arr[n];
        for(int k=0;k<n;k++)
        {
            arr[k]=r+2;
            if(k%2==0)
            {
                r=r-2;
            }
            else
            {
                r=r+3;
            }
        }
        int cp=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>l)
            {
                cp++;
            }
        }
        if(cp==0)
        {
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        else
        {
            cout<<"-1"<<endl;
        }
        cout<<"\n";
    }
}
