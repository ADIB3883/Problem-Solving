#include<iostream>
using namespace std;
int main()
{
    int k,n,sum=0;
    cin>>k>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(arr[0]-k<=0)sum=0;
    else sum=arr[0]-k;
    for(int i=1;i<n;i++)
    {
        sum=sum+arr[i]-k;

    int x=sum;
    if(sum<=0)sum=0;
    else
    {
        sum=x;
    }
    }
    cout<<sum<<endl;
}

