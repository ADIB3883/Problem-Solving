#include<bits/stdc++.h>
#define cmp(typ) complex<typ>
#define vsort(vc) sort(vc.begin(),vc.end())
#define vrsort(vc) sort(vc.rbegin(),vc.rend())
#define srev(st) reverse(st.rbegin(),st.rend())
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define Case(a) cout<<"Case "<<a<<": "
#define CaseN(a) cout<<"Case "<<a<<": "
#define psum(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1)
#define pxor(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return x^y;})
#define pgcdLeft(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define pgdcRight(vc,sm) partial_sum(vc.rbegin(),vc.rend(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
class teacher;
class student
{
    ll dept;
public:
    void setDept(ll d)
    {
        dept=d;

    }
    bool  TsameDept(teacher tt);
};
class teacher
{
    ll dept;
public:
    void setDept(ll d)
    {
        dept=d;

    }
    friend bool student :: TsameDept(teacher tt);
};
bool student::TsameDept(teacher t)
{
    if(dept==t.dept)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    student s;
    teacher t;
    s.setDept(6);
    t.setDept(6);
    if(s.TsameDept(t)==true)
    {
        cout<<"Same\n\n\n\n\n";
    }
    else
    {
        cout<<"Different\n\n\n\n";
    }


    return 0;
}

