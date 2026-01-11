#include<iostream>
using namespace std;
class Employee{
public:
   string Name;
   string Company;
   int age;

   void Intro()
   {
       cout<<"Name- "<<Name<<endl;
       cout<<"Company- "<<Company<<endl;
       cout<<"age- "<<age<<endl;
   }


};
int main()
{
    Employee  employee1;
    employee1.Name="Saldina";
    employee1.Company="Youtube";
    employee1.age="22";
    employee1.Intro();
      Employee  employee2;
    employee2.Name="Adib";
    employee2.Company="tube";
    employee2.age="29";
    employee2.Intro();
}
