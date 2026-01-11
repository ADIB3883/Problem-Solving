#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n%2==0)
    {
        n=n/2;
    }
    else
    {
        n=-((long long int)(n/2)+1);
    }
    cout<<n<<endl;
}
