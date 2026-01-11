#include<bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    node*left,*right,*parent;
    node()
    {
        left=NULL;
        right=NULL;
        parent=NULL;
    }
};
class BST
{
private:
    node*root;
    void delete0Child(node*nod)
    {
        cout<<"0000000000"<<endl;
        if(nod==root)
        {
            delete(nod);
            root=NULL;
        }
        else
        {
            node*par=nod->parent;
            if(par->value > nod->value)
            {
                par->left=NULL;
            }
            else
            {
                par->right=NULL;
            }
            delete(nod);
            }
    }
    void delete1Child(node*nod)
    {
        cout<<"1111111111"<<endl;
        node*par=nod->parent;
        node*child;
        if(nod->left==NULL)
        {
            child=nod->right;
        }
        else
        {
            child=nod->left;
        }
        if(par==NULL)
        {
            //root;
            delete(nod);
            root=child;
            child->parent=NULL;
        }
        else
        {
            delete(nod);
            child->parent=par;
            if(par->value > child->value)
            {
                par->left=child;
            }
            else
            {
                par->right=child;
            }
        }
}
    node*findSuccessor(node*nod)
    {
        node*temp=nod->right;
        while(temp->left!=NULL)
        {
            temp=temp->left;
        }
        return temp;
    }
    void delete2Child(node*nod)
    {
        cout<<"222222222222222"<<endl;
        node*temp=findSuccessor(nod);
        nod->value=temp->value;
        if(temp->right!=NULL)
        {
            delete1Child(temp);
        }
        else
        {
            delete0Child(temp);
        }
    }
public:
    BST()
    {
        root=NULL;
    }
    node*getRoot()
    {
        return root;
    }
    void insert(int value)
    {
        node*newNode=new node;
        newNode->value=value;
        if(root==NULL)
        {
            root=newNode;
        }
        else
        {
            node*temp=root;//44
            node*temp1;
            while(temp!=NULL)
            {
                temp1=temp;//44 88 65
                if(value < temp->value)
                {
                    temp=temp->left;//65 NULL
                }
                else
                {
                    temp=temp->right;//88
                }
            }
            //temp NULL,temp1 65
            if(value<temp1->value)
            {
                //left
                newNode->parent=temp1;
                temp1->left=newNode;
            }
            else
            {
                newNode->parent=temp1;
                temp1->right=newNode;
            }
            }
    }
    void inorder(node*Node)
    {
        if(Node==NULL)
        {
            return;
        }
        inorder(Node->left);
        cout<<Node->value<<" ";
        inorder(Node->right);
    }
    int findMax()
    {
        node*temp=root;
        if(root==NULL)
        {
            return -1;
        }
        else
        {
            while(temp->right!=NULL)
            {
                temp=temp->right;
            }
            return temp->value;
        }
    }
    int findMin()
    {
        node*temp=root;
        if(root==NULL)
        {
            return -1;
        }
        else
        {
            while(temp->left!=NULL)
            {
                temp=temp->left;
            }
              return temp->value;
        }
    }
    bool searchV(int value)
    {
        node*temp=root;
        while(temp!=NULL)
        {
            if(temp->value==value)
            {
                return true;
            }
            else if(value<temp->value)
            {
                temp=temp->left;
            }
            else
            {
                temp=temp->right;
            }
        }
        return false;
    }
    void deleteV(int value)
    {
        node*temp=root;
        //node*temp1;
        while(temp!=NULL)
        {
            //temp1=temp;
            if(temp->value==value)
            {
                break;
            }
            else if(value<temp->value)
            {
                temp=temp->left;
            }
            else
            {
                temp=temp->right;
            }
        }
        if(temp==NULL)
        {
            cout<<"Not Found"<<endl;
            return;
        }
        else
        {
            if(temp->left==NULL && temp->right==NULL)
            {
                delete0Child(temp);
            }
            else if(temp->left==NULL || temp->right==NULL)
            {
                delete1Child(temp);
            }
            else
            {
                delete2Child(temp);
            }
            }
    }
};
int main()
{
    //  int arr[]={44,17,88,32,65,97,28,54,82,29,76,80};
    //int n=sizeof(arr)/sizeof(arr[0]);
    int n;
    cin>>n;
    //cout<<n<<endl;
    BST bst;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        bst.insert(arr[i]);
    }
    cout<<"InOrder Traversal"<<endl;
    node*root=bst.getRoot();
    bst.inorder(root);
    cout<<endl;
    cout<<"Maximum value: ";
    cout<<bst.findMax()<<endl;
    cout<<"Miniimum value: ";
    cout<<bst.findMin()<<endl;
    cout<<"Here comes Searching\nEnter the number to search: ";
    int p;
    cin>>p;
    bool found= bst.searchV(p);
    if(found)
    {
        cout<<endl<<"Element exists "<<endl;
        }
    else
    {
        cout<<endl<<"Element does not exist "<<endl<<endl;
    }
    cout<<"Here comes Deletion: "<<endl;
    int q;
    cout<<"Enter element to delete: "<<endl;
    cin>>q;
    bst.deleteV(q);
    cout<<"Erpr print"<<endl;
    bst.inorder(root);
   // cout<<endl<<bst.getRoot()->value<<endl;
   }
