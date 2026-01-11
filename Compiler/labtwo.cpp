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
#define Case(a) cout<<"Case "<<a<<":"
#define CaseN(a) cout<<"Case "<<a<<":"
#define psum(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1)
#define pxor(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return x^y;})
#define pgcdLeft(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define pgdcRight(vc,sm) partial_sum(vc.rbegin(),vc.rend(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define ll long long int
#define dub double
#define dubb long double
#define pi acos(-1)
#define nl '\n'
using namespace std;
ofstream fileout("output.txt",ios_base::out);
bool idOrkey(char ch)
{
    if((ch >='0' && ch <='9') || (ch >='a' && ch <= 'z') || (ch >='A' && ch<='Z') || (ch=='_'))
    {
        return true;
    }
    return false;
}
bool digit (string a)
{
    ll cnt=0;
    ll n=a.size();
    if(a[0]!='-' && !(a[0] >='0' && a[0]<='9') && a[0]!='.')
    {
        return false;
    }
    if(a[0]=='.')cnt++;
    for(int i=1;i<n;i++)
    {
        if(!(a[i]>='0' && a[i]<='9') && a[i]!='.')return false;
        if(a[i]=='.')cnt++;
    }
    if(cnt>1)return false;
    return true;
}
bool id(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(!idOrkey(s[i]))
        {
            return false;
        }
    }
    if(s.size()>0)
    {
        if(s[0]>='0' && s[0]<='9')
        {
            return false;
        }
    }
    if(s.empty())return false;
    return true;
}
bool op(string ch){
    vector<string>op={"+","-","*","%","&&","||","!","&","|","<<",">>","==","!=","<",">","<=",">=","=","+=","-=","*=","/=","%=","=","||=","&=","|=","^=","<<=",">>="};
    if(find(op.begin(),op.end(),ch)!=op.end())return true;
    else return false;
}
bool space(char ch)
{
    if(ch==' ' || ch=='\n' || ch=='\t')return true;
    return false;
}
/*
bool punc(char ch)
{
    vector<char >punc={',','.',';',':'};
    if(find(punc.begin(),punc.end(),ch)!=punc.end())return true;
    else return false;
}
*/
bool keyword(string a)
{
    vector<string>key={"if","else","else if","for","while","do","break","int","char","float","double","unsigned","const","return","include","auto","void","continue","union"};
    if(find(key.begin(),key.end(),a)!=key.end())return true;
    else return false;
}
bool interrupt(char ch)
{
    vector<char>bracket={'(',')','{','}','[',']',',','.',';','?',':'};
    if(find(bracket.begin(),bracket.end(),ch)!=bracket.end()) return true;
    else return false;
}
class symbolInfo
{
    string symbol,type;
    public:
    symbolInfo(string symbol,string type)
    {
        this->symbol=symbol;
        this->type=type;
    }
    string getsymbol()
    {
        return symbol;
    }
    string gettype()
    {
        return type;
    }
    void setsymbol(string symbol)
    {
        this->symbol=symbol;
    }
    void settype(string type)
    {
        this->type=type;
    }
};
class symboltable
{
    vector<symbolInfo>table[12];
    public:
    void insertt(string symbol,string type)
    {
        bool b=lookup(symbol);
        if(b==false)
        {
            symbolInfo obj=symbolInfo(symbol,type);
            int hashVal=hashFunc(symbol);
            table[hashVal].push_back(obj);
            ll pos=table[hashVal].size();
            fileout<<"Inserted at position"<<hashVal<<","<<pos-1<<endl;
            printt();
        }
        else
        {
            fileout<<"Value already exists"<<endl;
        }

    }
    bool lookup(string symbol)
    {
        int hashVal=hashFunc(symbol);
        bool b=false;
        for(int j=0;j<table[hashVal].size();j++)
        {
            if(table[hashVal][j].getsymbol()==symbol)
            {
                fileout<<"Foud at "<<hashVal<<","<<j<<endl;
                b=true;
            }
        }
        return b;
        ////if(b==false) cout<<"Symbol not found in the table"<<endl;
    }
    void del(string symbol)
    {
        ll pos=0;
        ll hashVal=hashFunc(symbol);
        bool b=false;
        vector<symbolInfo>::iterator it = table[hashVal].begin();
        for(; it!=table[hashVal].end(); ++it)
        {
            if(it->getsymbol()==symbol)
            {
                fileout<<"Deleted from "<<hashVal<<","<<pos<<endl;
                table[hashVal].erase(it);
                b=true;
                break;
            }
            pos++;
        }
        if(b==false) 
        fileout<<"Symbol not found in the table"<<endl;
    }
    void printt()
    {
        for(int i=0;i<12;i++)
        {
            fileout<<i<<"->";
            for(int j=0;j<table[i].size();j++)
            {
                fileout<<"<"<<table[i][j].getsymbol()<<","<<table[i][j].gettype()<<">";
            }
            fileout<<endl;
        }
    }
    ll hashFunc(string symbol)
    {
        /*
        ll a=((symbol[0]+symbol[1]+symbol[2])*2)%12;
        return a;
        */ 
       ll sum=0;
       if(symbol.length()>=1)sum+=symbol[0];
       if(symbol.length()>=2)sum+=symbol[1];
         if(symbol.length()>=3)sum+=symbol[2];
         return ((sum*2)%12);
    }
};
int main(){
   string symbol,type;
   symboltable ob;
   ifstream input;
   ofstream key("output1_keyword.txt");
   ofstream func("output1_function.txt");
   ofstream identifier("output1_id.txt");
   ofstream operat("output1_operator.txt");
   ofstream num("output1_number.txt");
   ofstream liter("output1_literal.txt");
   input.open("sample_input1.txt");
   string s="";
   ll line=1;
   while(getline(input,s))
   {
    ll n=s.size();
    string token="",temp="",lit="";
    bool literal=false,op_pattern=false,str_pattern=false;
    for(int i=0;i<n;i++)
    {
        temp="";
        if(s[i]=='"')
        {
            if(literal)
            {
                lit+=s[i];
                liter<<lit<<" "<<line<<endl;
                literal=false;
            }
            else
            {
                literal=true;
                ///continue;
            }
        }
        if(literal)
        {
            lit+=s[i];
        }
        if(idOrkey(s[i]) && !literal)
        {
            token+=s[i];
        }
        else
        {
            if(!interrupt(s[i]) && !literal && !space(s[i]))
            {
                temp=s[i];
                if(op(temp))
                {
                    string y=temp;
                    if(i+1<n) y+=s[i+1];
                    if(op(y))
                    {
                        operat<<y<<" "<<line<<endl;
                        i++;
                        ob.insertt(y,"Operator");
                    }
                    else
                    {
                        operat<<temp<<" "<<line<<endl;
                        ob.insertt(temp,"Operator");
                    }
                    op_pattern=true;
                }
                else op_pattern=false;
            }
            if(keyword(token))
            {
                key<<token<<" "<<line<<endl; 
                ob.insertt(token,"Keyword"); 
                str_pattern=true; 
            }
            else if(id(token)) 
            { 
                if(s[i]=='(') 
                { 
                    func<<token<<" "<<line<<endl; 
                    ob.insertt(token,"Function"); 
                } 
                else 
                { 
                    identifier<<token<<" "<<line<<endl; 
                    ob.insertt(token,"Identifier"); 
                } 
                str_pattern=true; 
            } 
            else if(digit(token)) 
            { 
                num<<token<<" "<<line<<endl; 
                ob.insertt(token,"Number"); 
                str_pattern=true; 
            } 
            else 
            { 
                str_pattern=false; 
            } 
            if(((token.size() && str_pattern==false) || (temp.size() && op_pattern==false)) && !literal || interrupt(s[i])) 
            { 
                cout<<"Lexical error at line "<<line<<" and error is: "<<s[i]<<endl;
            }
            token="";
        }
        str_pattern=op_pattern=false;
    }
    line++;
   }
   input.close();
   return 0;
}