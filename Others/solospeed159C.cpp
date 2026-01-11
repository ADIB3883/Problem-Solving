#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
       int cp=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==k)
    {
        cout<<"1"<<endl;
    }

    else
    {
        int cnt=0,flag=k;
      for(int i=0;i<n;i++)
      {
          flag--;
          if(flag==0)
          {
              cnt++;
              //flag--;
              if(!flag && i!=n-1) flag=k-1;
          }
      }
      if(flag) cnt++;
      cout<<cnt<<endl;

      }


}

