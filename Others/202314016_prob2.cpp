#include<bits/stdc++.h>
using namespace std;
class person
{
    string name;
    int age;
public:
    person()
    {

    }
person(string n,int a)
{
    name=n;
    age=a;
}
void displayPersonInfo()
{
    cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;
}
};
class employee
{
   int eid;
    string dept;
public:
    employee()
    {

    }

    employee(int EID,string g)
    {
        eid=EID;
        dept=g;
    }

    void displayEmployeeInfo()
    {
        cout<<"Employee ID: "<<eid<<endl<<"Department: "<<dept<<endl;
    }
};
class manager: public person,employee
{
    int teamsize;
public:
    manager()
    {

    }
    manager(string n,int a,int EID,string g,int f):person(n,a),employee(EID,g)
    {
        teamsize=f;
    }
    void displayManagerInfo()
    {
        person::displayPersonInfo();
        employee::displayEmployeeInfo();
        cout<<"Teamsize: "<<teamsize;
    }
};
int main()
{
    string g;
    int h;
    int i,k;
    string j;
    cout<<"Enter details: "<<endl;
    cout<<"Enter Name: "<<endl;
    getline(cin,g);
    cout<<"Enter Age: "<<endl;
    cin>>h;
    cout<<"Enter Employee ID: "<<endl;
    cin>>i;
     cout<<"Enter Department: "<<endl;
    cin>>j;
     cout<<"Enter TeamSize: "<<endl;
    cin>>k;
    manager m(g,h,i,j,k);
    m.displayManagerInfo();

}
