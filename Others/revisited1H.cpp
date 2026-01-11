#include<iostream>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int sum=0;
    for(int i=1;i<=w;i++)
    {
        sum=sum+i*k;
    }
    sum=sum-n;
 if(sum>0)
       cout<<sum<<endl;
 else
    cout<<"0"<<endl;

}
