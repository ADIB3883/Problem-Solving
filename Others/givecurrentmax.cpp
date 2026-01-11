
#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int roll;
    int mark;
    student(string name,int roll,int mark)
    {
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
};

class cmp
{
    public:
    bool operator()(student a,student b)
    {
        if(a.mark == b.mark) return a.roll > b.roll;
        return a.mark<b.mark;
    }
};
int main()
{
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    priority_queue<student,vector<student>,cmp> pq;
    for(int i=0;i<n;i++)
    {
        string name;
        int roll;
        int mark;
        cin>>name>>roll>>mark;
        student ob(name,roll,mark);
        pq.push(ob);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int w;
        cin>>w;
        if(w==0)
        {
            string nam;
            int rol,mrk;
            cin>>nam>>rol>>mrk;
            student ob(nam,rol,mrk);
            pq.push(ob);
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
        }
        else if(w==1)
        {
            if(!pq.empty()) cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
            else cout<<"Empty"<<endl;
        }
        else
        {
            if(!pq.empty())
            {
                pq.pop();
                if(!pq.empty()) cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
                else cout<<"Empty"<<endl;
            }
            else cout<<"Empty"<<endl;
        }
    }
}
