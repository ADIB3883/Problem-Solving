#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define iint long long
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node()
    {
        next = nullptr;
        prev=nullptr;
    }
};
class doublellist
{

private:
    Node *head;
    Node *tail;

public:
    doublellist()
    {
        head = NULL;
        tail = NULL;
    }
    void insert_sort(int val)
    {
        Node *newnode=new Node;
       newnode->data=val;
       if(head==NULL)
       {
        head=newnode;
        tail=newnode;
        return;
       }
       if(val<=head->data)
       {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        return;
       }
       if(val>=tail->data)
       {

        tail->next=newnode;
         newnode->prev=tail;
        tail=newnode;
        return;
       }
       Node *temp=head;
       while(temp->next->data<val)
       {
        temp=temp->next;
       }
       newnode->next=temp->next;
       newnode->prev=temp;
       temp->next->prev=newnode;
       temp->next=newnode;


    }
    void insertt(int n)
    {
        int val;
        for(int i=1;i<=n;i++)
        {
            cin>>val;
            insert_sort(val);
        }
    }
    void print()
    {
        Node * temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"\n\n";
    }
};
int main()
{
    doublellist s;
    int n,val;
    cin>>n;
    s.insertt(n);
    s.print();
    for(int i=1;i<=n;i++)
    {
        cin>>val;
        s.insert_sort(val);
        s.print();
    }
}
