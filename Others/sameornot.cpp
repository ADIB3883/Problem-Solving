#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node*next;
    Node()
    {
        this->data=0;
        this->next=NULL;
    }
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    Node(int data,Node*next)
    {
        this->data=data;
        this->next=next;
    }
};
class stackk
{
public:
    int sz;
    Node*head;
    Node*tail;
    stackk()
    {
        head=NULL;
        tail=NULL;
        sz=0;
    }
    bool isEmpty()
    {
        if(sz==0)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    void push(int num)
    {
        Node*newNode=new Node(num);
        sz++;
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            newNode->next=head;
            head=newNode;
        }
    }
    void pop()
    {
        if(isEmpty())
        {
            return ;
        }
        Node*temp=head;
        sz--;
        head=head->next;
        delete temp;
        if(head==NULL)
        {
            tail==NULL;
        }
    }
    int top()
    {
        return head->data;
    }

};
class queueu
{
public:
    int sz;
    Node*head;
    Node*tail;
    queueu()
    {
        head=NULL;
        tail=NULL;
        sz=0;
    }
    bool isEmpty()
    {
        if(sz==0)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    void push(int num)
    {
        Node*newNode=new Node(num);
        sz++;
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop()
    {
        if(isEmpty())
        {
            return ;
        }
        Node*temp=head;
        sz--;
        head=head->next;
        delete temp;
        if(head==NULL)
        {
            tail==NULL;
        }
    }
    int front()
    {
        return head->data;
    }

};
int main()
{
    int n,m;
    cin>>n>>m;
    stackk s;
    queueu q;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        s.push(num);
    }
      for(int i=0;i<m;i++)
    {
        int num;
        cin>>num;
        q.push(num);
    }
    bool flag=true;
    while(!s.isEmpty() && !q.isEmpty())
    {
        if(s.top()==q.front())
        {
                       s.pop();
            q.pop();
        }
        else
        {
            flag=false;
            break;
        }


    }
if(n!=m)
{
    cout<<"NO"<<endl;
    return 0;
}
else
{
        if(flag==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

}
