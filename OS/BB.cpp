#include<bits/stdc++.h>
using namespace std;
int n;
int Q=2;
class Pro
{
    public:
    int pid;
    int at;
    int bt;
    int rbt;
    int ct;
    int tat;
    int wt;
    bool comp;
    bool inQ;
    Pro(int pid,int at,int bt)
    { 
        this->pid=pid;
        this->at=at;
        this->bt=bt;
        this->rbt=bt;
        this->ct=this->tat=this->wt=0;
        this->comp=false;
        this->inQ=false;
    }
};
void printR(vector<Pro>p)
{
    double tat_sum=0;
    double wt_sum=0;
    int maxi=-1;
    int mini=1e9;
    for(int i=0;i<n;i++)
    {
        tat_sum+=p[i].tat;
        wt_sum+=p[i].wt;
        if(p[i].ct>maxi)
        {
            maxi=p[i].ct;
        }
        if(p[i].at < mini)
        {
            mini=p[i].at;
        }

    }
    double avgtat=0;
    double avgwt=0;
    avgtat=tat_sum/n;
    avgwt=wt_sum/n;
    int sl=maxi=mini;
    int tp=(n/sl);
    cout<<"--------------Scheduling--------------";
    cout<<"PID\tAT\tBT\tCT\tTAT\tWT";
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<"\t"<<p[i].at<<"\t"<<p[i].bt<<"\t"<<p[i].ct<<"\t"<<p[i].tat<<"\t"<<p[i].wt;
    }
    cout<<"Average TurnaroundTime: "<<avgtat<<'\n';
        cout<<"Average Waiting Time: "<<avgwt<<'\n';
            cout<<"Scheduling Length: "<<sl<<'\n';
            cout<<"Throuhput: "<<tp<<'\n';



}
void algo_name(vector<Pro>p)
{
    queue<int>q;
    int cur=0;
    int temp=n;
    while(temp!=0)
    {
        for(int i=0;i<n;i++)
        {
            if(cur>=p[i].at && p[i].rbt >0 && !p[i].comp && !p[i].inQ)
            {
                q.push(i);
                p[i].inQ=true;
            }
        }
        int idx=q.front();
        q.pop();
        p[idx].inQ=false;
        if(q.empty())
        {
            cur++;
            continue;
        }
        if(p[idx].rbt>Q)
        {
            cur+=Q;
            p[idx].rbt-=Q;
        }
        else
        {
            cur+=p[idx].rbt;
            p[idx].comp=true;
            p[idx].ct=cur;
            p[idx].tat=p[idx].ct-p[idx].at;
            p[idx].wt=p[idx].tat-p[idx].bt;
            temp--;
        }
        for(int i=0;i<n;i++)
        {
           if(cur>=p[i].at && p[i].rbt >0 && !p[i].comp && !p[i].inQ)
            {
                q.push(i);
                p[i].inQ=true;
            }
        }
        if(p[idx].rbt>0)
        {
            q.push(idx);
            p[idx].inQ=true;
        }
    }
}
int main()
{
    cin>>n;
    vector<Pro>p;
    for(int i=0;i<n;i++)
    {
        int at,bt;
        cin>>at>>bt;
        p.push_back(Pro(i+1,at,bt));
    }
    algo_name(p);
    printR(p);
}