
///MD. IFTEHAJUL HOQUE ADIB
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll ans;
string dna;
class Node
{
public:
    Node *child[26];
    ll eow;
    Node()
    {
        eow = 0;
        for (int i = 0; i < 26; i++)
        {
            child[i] = NULL;
        }
    }
};
Node *root;
class Trie
{
public:
    Trie()
    {   
        root = new Node();
    }
    void insert(string word)
    {
        Node *curr = root;
        for (auto c : word)
        {
            int idx = c - 'A';
            if (curr->child[idx] == NULL)
                curr->child[idx] = new Node();
            curr = curr->child[idx];
        }
        curr->eow = 1;
    }
    ll lcp(string s="",Node*curr=root)
    {
        ll c=0;
        for(ll i=0;i<26;i++)
        {
            if(curr->child[i]!=NULL)
            {
                c+=lcp(s+char(i+'A'),curr->child[i]);
            }
        }
        if(c>ans && curr->eow)
        {
            ans=c;
            dna=s;    
        }
        return curr->eow+c; 
    }



};

int main()
{
    Trie t;
    ll w;
    cin>>w;
    ll choice;
    for(ll i=0;i<w;i++)
    {
        cin>>choice;
        if(choice==1)
        {
            string p;
            cin>>p;
            t.insert(p);
        }
        else
        {
            ans=0;
            dna="";
            t.lcp();
            cout<<dna<<'\n';
        }


    }
}