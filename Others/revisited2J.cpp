
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
  int mini=1e9;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    int previous=-1,sp=1e9;
for(int i=0;i<n;i++)
    {
            if(arr[i]==mini && previous==-1)
            {
                previous=i;
                }
                else if(arr[i]==mini )
                {

                    sp=min(sp,i-previous);
                    previous = i;
                }
            }

    cout<<sp;
}

