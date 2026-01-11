#include <bits/stdc++.h>
using namespace std;
#define granite_state ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long
#define line cout << "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define vsb (v).begin(),(v).end()
#define vse (v).rbegin(),(v).rend()
#define spc " "
#define pb push_back
#define pf push_front;
class item
{
    public:
    int val;
    int wt;
    float ratio;
    item(int val,int wt)
    {
        this->val = val;
        this->wt = wt;
        this->ratio = ((float)val/wt);
    }
};
void print(vector<item>&items)
{
    for(int i=0;i<items.size();i++)
    {
        cout<<i+1<<"th item having value : ";
        cout<<items[i].val<<" "<<items[i].wt<<" "<<items[i].ratio<<endl;
    }
}
bool com(item a,item b)
{
   return a.ratio>b.ratio; 
}
int fractional_knapsack(int n,int w,vector<item>&items)
{
     sort(items.begin(),items.end(),com);
     float profit = 0;
     for(int i=0;i<items.size();i++)
     {
         if(w>items[i].wt)
         {
              profit+=items[i].val;
              w-=items[i].wt;
         }
         else
         {
             profit+=(w*items[i].ratio);
             w-=w;
             break;
         }
     }
     return profit;
}
signed main()
 {
    //granite_state
    int n,W;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter size of the knapsack W : ";
    cin>>W;
    vector<item>items;
    for(int i=1;i<=n;i++)
    {
        int v,w;
        cout<<"Enter the value and weight of "<<i<<"th item : ";
        cin>>v>>w;
        items.push_back(item(v,w));
    }
    print(items);
    cout<<fractional_knapsack(n,W,items)<<endl;
}

    ////////////////////////////////////////////////////
    //                                                 //
    //                 A                               //
    //                                                 //
    //                 L                               //
    //                                                 //
    //                 I                               //
    //                                                 //
    //                 F                               //
    /////////////////////////////////////////////////////
//think simply, it's always easier than it seems at first
    //PEN AND PAPER instead of ms paint
    //keep at it even if it feels exhausting(we're not doing this for fun anymore)
    //2 GHONTAR AGER EDITORIAL DHORBI NA