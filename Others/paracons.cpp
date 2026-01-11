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
class Person
{
public:
    string name;
    int NID;
    Person()
    {
        cout<<"Person created"<<endl;
    }
    Person(string nm,int id)
    {
        name=nm;
        NID=id;
    }
    ~Person()
    {
        cout<<"Person destroyed"<<endl;
    }
};
class customer: public Person
{
public:
    int acc_no;
    float balance;
    customer()
    {
        cout<<"Customer created"<<endl;
    }
    customer(string n,int i,int acc,float b): Person(n,i)
    {
        acc_no=acc;
        balance=b;
    }
    ~customer()
    {
        cout<<"Customer destroyed"<<endl;
    }
    void display()
    {
        cout<<name<<" "<<NID<<" "<<acc_no<<" "<<balance<<endl;
    }
};
class employee:public Person
{
public:
    int join;
    float salary;
    employee()
    {
        cout<<"employee created"<<endl;
    }
    employee(string n,int i,int j,float s):Person(n,i)
    {
        join=j;
        salary=s;
    }
    ~employee()
    {
        cout<<"employee destroyed"<<endl;
    }
    void print()
    {
        cout<<name<<" "<<NID<<" "<<join<<" "<<salary<<endl;
    }
};
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    customer c("Adib",16,38,342);
    c.display();

    employee e("Hoque",66,24,564);
    e.print();
    return 0;
}

