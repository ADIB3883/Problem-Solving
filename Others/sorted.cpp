
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int>st;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            st.insert(x);
        }
       set<int>::iterator it;
       for(it=st.begin();it!=st.end();it++)
       {
           cout<<*it<<" ";
       }
        cout<<endl;
    }
}
