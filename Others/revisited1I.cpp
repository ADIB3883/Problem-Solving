#include<iostream>
using namespace std;
int main()
{
    long long int n=0;
    long long int arr[5];
    for(int i=1;i<=5;i++)
    {
        cin>>arr[i];
    }
    for( int i=1;i<=5;i++)
    {
        if(arr[i]==0)
        {
            n=i;
            break;
        }
    }
    cout<<n<<endl;
}
