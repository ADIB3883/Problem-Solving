#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
void recur(int a)
{
    if(a==0)return;
    else
    {
        cout<<"I love Recursion"<<endl;
    }
    recur(a-1);
    return;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int x;
    cin>>x;
    recur(x);
    return 0;
}

