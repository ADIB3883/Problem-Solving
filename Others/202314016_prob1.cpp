#include<bits/stdc++.h>
using namespace std;
class Vehicle
    {
    protected:
        int maxspeed;
    public:
        void setMaxSpeed(int a)
        {
            maxspeed=a;
        }
        int getMaxSpeed()
        {
            return maxspeed;
        }
        void display()
        {
            cout<<"Maximum speed is "<<maxspeed<<endl;
        }

    };
    class Car:public Vehicle
    {
    protected:
        int numDoors;
    public:
        void setNumDoors(int b)
        {
            numDoors=b;
        }
        int getNumDoors()
        {
            return numDoors;
        }
        void displayNumDoors()
        {
            cout<<"The number of doors is "<<numDoors<<endl;
        }
        void displayCarDetails()
        {
            display();
            displayNumDoors();
        }
    };
    class ElectricCar:public Car
    {
        int batteryLife;
    public:
        void setBatteryLife(int d)
        {
            batteryLife=d;
        }
        void displayBatterylife()
        {
            cout<<"The BatteryLife is "<<batteryLife<<" hours"<<endl;
        }
        void displayElectricCarDetails()
        {

               displayCarDetails();
               displayBatterylife();
        }
    };
    int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ElectricCar c;
    c.setBatteryLife(5);
    c.setNumDoors(4);
    c.setMaxSpeed(120);
    c.displayElectricCarDetails();
    cout<<endl<<endl;
    c.setBatteryLife(7);
    c.setNumDoors(6);
    c.setMaxSpeed(140);
    c.displayElectricCarDetails();
    cout<<endl<<endl;
    c.setBatteryLife(10);
    c.setNumDoors(2);
    c.setMaxSpeed(180);
    c.displayElectricCarDetails();
    return 0;
}

