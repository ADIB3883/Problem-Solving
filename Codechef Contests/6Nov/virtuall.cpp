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
class base
{
public:
    virtual     void f1()
    {
        cout<<"Base F 1\n";
    }
       virtual void f2()
    {
        cout<<"Base F 2\n";
    }
virtual void f3()
    {
        cout<<"Base F 3\n";
    }
};
class derived1: public base
{
public:
    void f1()
    {
        cout<<"Derived F 1\n";
    }
};
class derived2 : public derived1
{
public:
    void f2()
    {
        cout<<"Derived F 2\n";
    }
};
int main(){
    base*ptr1=new base();
    base*ptr2=new derived1();
    base*ptr3=new derived2();

    ptr1->f1();
    ptr1->f2();
    ptr1->f3();
    ptr2->f1();
    ptr2->f2();
    ptr2->f3();
    ptr3->f1();
    ptr3->f2();
    ptr3->f3();
    return 0;
}

