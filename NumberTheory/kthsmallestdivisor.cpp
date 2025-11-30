///Finding kth smallest divisor
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t=1,n,k;
    while(t--)
    {
        cin>>n>>k;
        vector<long long int>vec;
        for( long long int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                vec.push_back(i);
                if(i*i !=n) vec.push_back(n/i);
            }
        }
        sort(vec.begin(),vec.end());
        if(vec.size()<k) cout<<"-1"<<"\n";
        else cout<<vec[k-1]<<"\n";
    }
    return 0;

}
