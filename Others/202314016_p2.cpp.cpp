
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
class Employee
{
public:
 virtual int calculateSalary()
    {
      return 0;
    }
};
class FullTimeEmployee: public Employee
{
public:
    int calculateSalary()
    {
        return 50000;
    }
};
class PartTimeEmployee: public Employee
{
    int x;
public:
    void seti(int a)
    {
        x=a;
    }
    int calculateSalary()
    {
        return x*300*30;
    }
};
void printSalary(Employee &employee)
{
cout<<"The Salary of PartTimeEmployee is: "<<employee.calculateSalary()<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    Employee e;
    FullTimeEmployee e1;
    PartTimeEmployee e2;
    int p;
    cout<<"Enter working hours for PartTimeEmployee: "<<endl;
    cin>>p;
    e2.seti(p);
    printSalary(e2);

    ll d=e1.calculateSalary();
    cout<<"The Salary of the FullTimeEmployee is: "<<d<<endl;

    return 0;
}


