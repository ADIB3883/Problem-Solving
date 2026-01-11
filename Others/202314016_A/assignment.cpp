#include<bits/stdc++.h>
#define vsort(vc) sort(vc.begin(),vc.end())
#define vrsort(vc) sort(vc.rbegin(),vc.rend())
#define srev(st) reverse(st.rbegin(),st.rend())
#define ll long long int
#define dub double
#define dubb long double
#define pi acos(-1)
#define nl '\n'
using namespace std;
ofstream outputFile("output.txt");

class SymbolInfo
{
public:
    string symbol;
    string type;
    SymbolInfo(string n,string t)
    {
        symbol=n;
        type=t;
    }
};
const int SIZ=100;
class symbolTable
{
    public:
    vector<SymbolInfo> table[SIZ];
    int hashfunction(string s)
    {
        int n=((2+0+2+3+1+4+0+1+6)%9)+1 ;///My ID is 202314016
        int len=s.length();
        int sum=0;
        int k= min(len,n);
        for(int i=0;i<k;i++)
        {
            int asc=s[i];
            asc=asc<<6;
            sum+=asc;
        }
        int res=sum%SIZ;
        return res;
    }
    void insertt(SymbolInfo sys)
    {
        int exis=0;
        exis= lookup(sys.symbol,true);
        if(exis==1)
        {
            cout<<"It already exists in the symbol table"<<endl;
            outputFile<<"It already exists in the symbol table"<<endl;
            return;
        }
        int index=hashfunction(sys.symbol);
        int column=table[index].size();
        table[index].push_back(sys);
        cout<<"Inserted successfully in the symbol table at index "<<index<<" and column "<<column<<endl;
        outputFile<<"Inserted successfully in the symbol table at index "<<index<<" and column "<<column<<endl;
    } 
    int lookup(string s,bool inslook=false)
    {
        int index=hashfunction(s);
        int column=-1;
        for(int i=0;i<table[index].size();i++)
        {
            if(table[index][i].symbol==s)
            {
                column=i;
                break;
            }
        }
        if(inslook==true)
        {
            if(column==-1)return 0;
            else return 1;
        }
        if(column==-1)
        {
            cout<<"Not found in the symbol table"<<endl;
            outputFile<<"Not found in the symbol table"<<endl;
        }
        else
        {
            cout<<"Found at "<<index<<","<<column<<endl;
            outputFile<<"Found at "<<index<<","<<column<<endl;
        }
    }

    void deletee(string s)
    {
        int index=hashfunction(s);
        int column=-1;
        for(int i=0;i<table[index].size();i++)
        {
            if(table[index][i].symbol==s)
            {
                column=i;
                break;
            }
        }
        if(column==-1)
        {
            cout<<"Not found in the symbol table"<<endl;
            outputFile<<"Not found in the symbol table"<<endl;
            return;
        }
        else
        {
            int last=table[index].size()-1;
            swap(table[index][column],table[index][last]);
            table[index].pop_back();
            cout<<"Deleted from the symbol table at index "<<index<<","<<column<<endl;
            outputFile<<"Deleted from the symbol table at index "<<index<<","<<column<<endl;
        }
    }
    void printt()
    {
        for(int i=0;i<SIZ;i++)
        {
            if(table[i].size()==0)continue;
            cout<<i<<" -> ";
            outputFile<<i<<" -> ";
            for(int k=0;k<table[i].size();k++)
            {
                cout<<"<"<<table[i][k].symbol<<","<<table[i][k].type<<">";
                outputFile<<"<"<<table[i][k].symbol<<","<<table[i][k].type<<">";
            }
            cout<<endl;
            outputFile<<endl;
        }
    }
};
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    symbolTable st;
    ifstream inputFile("input.txt");
    string line;
    while(getline(inputFile,line))
    {
        string q1,q2,q3;
        stringstream ss(line);
        ss>>q1>>q2>>q3;
        if(q1=="I")
        {
            SymbolInfo sys(q2,q3);
            st.insertt(sys);
        }
        else if(q1=="L")
        {
            st.lookup(q2);
        }
        else if(q1=="D")
        {
            st.deletee(q2);
        }
        else if(q1=="P")
        {
            st.printt();
        }
        else
        {
            cout<<"Invalid command"<<endl;
            outputFile<<"Invalid command"<<endl;
        }
    }
   return 0;
}