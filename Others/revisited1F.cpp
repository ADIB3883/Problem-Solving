#include<iostream>
using namespace std;
int main()
{
    int n,cp=0;;
    cin>>n;
            int a=0,b=0,c=0;
            int s1[n],s2[n],s3[n];
    for(int i=0;i<n;i++)
    {
        cin>>s1[i]>>s2[i]>>s3[i];
        a=a+s1[i];
        b=b+s2[i];
        c=c+s3[i];

    }
    if(a==0 && b==0 && c==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
