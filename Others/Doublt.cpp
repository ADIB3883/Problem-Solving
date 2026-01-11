#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node*prev;
};

class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    DoublyLinkedList()
    {
        head = nullptr;
        tail=nullptr;
    }

    void createList(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            Node *newNode = new Node;
            int val;
            cout << "Node " << i << ": ";
            cin >> val;
            newNode->data = val;
            newNode->next = nullptr;
            newNode->prev=nullptr;

            if (head == nullptr)
            {
                head = newNode;
                tail=head;
            }
            else
            {
                tail->next=newNode;
                newNode->prev=tail;
                tail=newNode;
            }
        }
        cout << "\n\n";
    }

    void insertFirst(int val)
    {
        Node *newNode = new Node;
        newNode->data = val;
        newNode->next = nullptr;
        newNode->prev=nullptr;
        if(head==nullptr)
        {
            head=newNode;
            tail=head;
        }
        else
        {
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
        cout << "Successfully inserted!\n\n";
    }

    void insertLast(int val)
    {
        Node *newNode = new Node;
        newNode->data = val;
        newNode->next = nullptr;
        newNode->prev = nullptr;
        if (head == nullptr)
        {
            head = newNode;
            tail=head;
        }
        else
        {
          newNode->prev=tail;
          tail->next=newNode;
          tail=newNode;
        }
        cout << "Successfully inserted!\n\n";
    }

    void insertAt(int pos, int val)
    {
        if (pos == 1)
            insertFirst(val);
        else
        {
            Node *newNode = new Node;
            newNode->data = val;
            newNode->next=nullptr;
            newNode->prev=nullptr;
            Node *temp = head;
            for(int i=2;i<pos;i++)
            {
                temp=temp->next;
                if(temp==nullptr)
                {
                    cout<<"insertion not possible"<<endl;
                    return;
                }
            }
            if(temp==tail)
                insertLast(val);
            else
            {
                newNode->next=temp->next;
                newNode->prev=temp;
                temp->next->prev=newNode;
                temp->next=newNode;
                cout << "Successfully inserted!\n\n";
            }

        }
    }

    void deleteFirst()
    {
        if (head == nullptr)
        {
            cout << "No list is created!\n";
        }
        else
        {
            if(head->next==nullptr)
            {
                head=nullptr;
                tail=nullptr;
                return;
            }
            Node*temp=head;
            head=head->next;
            head->prev=nullptr;
            delete temp;
            cout << "Successfully Deleted!\n\n";
        }
    }

    void deleteLast()
    {
                if (head == nullptr)
        {
            cout << "No list is created!\n";
        }
        else
        {
            if(tail->prev==nullptr)
            {
                head=nullptr;
                tail=nullptr;
                return;
            }
            Node*temp=tail;
            tail=tail->prev;
            tail->next=nullptr;
            delete temp;
            cout << "Successfully Deleted!\n\n";
        }
   }
   void deleteAt(int pos)
    {
        if (head == nullptr)
        {
            cout << "No list exists!\n";
            return;
        }
        Node*temp=head;
        for(int i=1;i<pos;i++)
        {
            temp=temp->next;
            if(temp==nullptr)
            {
                cout<<"Deletion not possible";
                return;
            }
        }
        if(temp==head)
            deleteFirst();
            else if(temp==tail)
                deleteLast();
        else
        {
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            delete temp;
            cout<<"Successfully Deleted\n\n";
        }
    }

    void printList()
    {
        if (head == nullptr)
        {
            cout << "No list!!\n";
        }
        else
        {
            cout << "List: ";
            Node *temp = head;
            while (temp != nullptr)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << "\n\n";
        }
    }
    void rotate()
    {
                if(head==nullptr || head->next==nullptr)
        {
       return;
        }
        Node*tmp=tail->prev;
        tail->prev=nullptr;
        tail->next=head;
        head->prev=tail;
        head=tail;
        tail=tmp;
        tail->next=nullptr;
    }
    bool palindrom()
    {
        Node*curr=head;
        Node*curr1=tail;
        while(curr && curr1)
        {
            if(curr->val != curr1->val)return false;
            curr=curr->next;
            curr1=curr1->next;
        }
        return true;
    }

    int search(int val)
    {
        if (head == nullptr)
        {
            return -1;
        }
        else
        {
            Node *temp = head;
            int index = 1;
            while (temp != nullptr)
            {
                if (temp->data == val)
                {
                    return index;
                }
                index++;
                temp = temp->next;
            }
            return 0;
        }
    }

    void freeTheList()
    {
        Node *temp = head;
        while (head != nullptr)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
    void reverse()
    {
        if(head==nullptr)
        {
            return ;
        }
        Node*tmp=nullptr;
        Node*curr=head;
        while(curr)
        {
            tmp=curr->prev;
            curr->prev=curr->next;
            curr->next=tmp;
            curr=curr->prev;
        }
        if(tmp)
        {
            head=tmp->prev;
            Node*curr=head;
            while(curr->next)
            {
                curr=curr->next;
            }
            tail=curr;
        }
    }
};

int main()
{
    cout << "Enter the number of elements in the list: ";
    int n;
    cin >> n;
    cout << "Create the list\n";
    DoublyLinkedList list;
    list.createList(n);
    list.printList();
    cout << "A singly linked list is being created!\n\n\n\n";

    while (true)
    {
        cout << "1. Insert First\n";
        cout << "2. Insert Last\n";
        cout << "3. Insert At\n";
        cout << "4. Delete First\n";
        cout << "5. Delete Last\n";
        cout << "6. Delete At\n";
        cout << "7. Search\n";
        cout << "8. Print List\n";
        cout << "9. Exit\n";
        cout<< "10 reverse\n";
        cout << "Enter Choice: ";
        cout<< "11 Rotate";
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter the element: ";
            int val;
            cin >> val;
            list.insertFirst(val);
        }
        else if (choice == 2)
        {
            cout << "Enter the element: ";
            int val;
            cin >> val;
            list.insertLast(val);
        }
        else if (choice == 3)
        {
            cout << "Enter the position: ";
            int pos;
            cin >> pos;
            cout << "Enter the element: ";
            int val;
            cin >> val;
            list.insertAt(pos, val);
        }
        else if (choice == 4)
            list.deleteFirst();
        else if (choice == 5)
            list.deleteLast();
        else if (choice == 6)
        {
            cout << "Enter the position: ";
            int pos;
            cin >> pos;
            list.deleteAt(pos);
        }
        else if (choice == 7)
        {
            cout << "Enter the value: ";
            int val;
            cin >> val;
            int pos = list.search(val);
            if (pos == -1)
                cout << "No list exists!\n";
            else if (pos)
                cout << "Position: " << pos << "\n\n";
            else
                cout << "Item not found in the list\n";
        }
        else if (choice == 8)
            list.printList();
        else if (choice == 9)
            break;
            else if(choice==10)
            {
                list.reverse();
            }
            else if(choice == 11)
            {
                list.rotate();
            }
        else
            cout << "Wrong Choice Input!!\n\n";
    }
    list.freeTheList();
    return 0;
}

