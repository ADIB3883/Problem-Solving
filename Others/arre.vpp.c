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
    Node*last;

public:
    DoublyLinkedList()
    {
        head = NULL;
        last=NULL;
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
            newNode->next = NULL;
            newNode->prev=NULL;
            if (head == NULL)
            {
                head = newNode;
                last= newNode;
            }
            else
            {
             last->next=newNode;
             newNode->prev=last;
             last=newNode;
            }
        }
        cout << "\n\n";
    }

    void insertFirst(int val)
    {
        Node *newNode = new Node;
        head->prev=newNode;
          newNode->prev=NULL;
          newNode->next=head;
        newNode->data = val;
        head = newNode;
        cout << "Successfully inserted!\n\n";
    }

    void insertLast(int val)
    {
        Node *newNode = new Node;
        newNode->data = val;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
            last=newNode;
        }
        else
        {
          last->next=newNode;
          newNode->prev=last;
          last=newNode;
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
            newNode->next=NULL;
            newNode->prev=NULL;
            Node *curNode=head;
            for (int i = 2; i < pos; i++)
            {
                curNode=curNode->next;
                if (curNode == NULL)
                {
                    cout << "Insertion not possible\n";
                    return;
                }
            }
            if(curNode==last)
            {
                insertLast(val);
            }
            else
            {
                newNode->next=curNode->next;
                newNode->prev=curNode;
                curNode->next->prev=newNode;
                curNode->next=newNode;
                cout<<"Successfully inserted!\n\n";
            }

            cout << "Successfully inserted!\n\n";
        }
    }

    void deleteFirst()
    {
        if (head == NULL)
        {
            cout << "No list is created!\n";
        }
        else
        {
            head->next->prev=NULL;
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << "Successfully Deleted!\n\n";
        }
    }

    void deleteLast()
    {
        if (head == NULL)
        {
            cout << "No list is created!\n";
        }
        else if (head->next == NULL)
        {
            delete head;
            head = NULL;
            cout << "Successfully Deleted!\n\n";
        }
        else
        {
            Node *temp = last;
            last->prev->next=NULL;
            last=last->prev;
            delete []temp;

            cout << "Successfully Deleted!\n\n";
        }
    }

    void deleteAt(int pos)
    {
        if (head == NULL)
        {
            cout << "No list exists!\n";
            return;
        }
        if (pos == 1)
        {
            deleteFirst();
            return;
        }

        int i=1;
        Node *temp= head;
        while(temp->next !=NULL)
        {
            if(i==pos)break;
            temp=temp->next;
            i++;
        }
        temp->next->prev=temp->prev;
        temp->prev->next=temp->next;
        delete [] temp;

        cout << "Successfully Deleted!\n\n";
    }

    void printList()
    {
        if (head == NULL)
        {
            cout << "No list!!\n";
        }
        else
        {
            cout << "List: ";
            Node *temp = head;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << "\n\n";
        }
    }

    int search1(int val)
    {
        if (head == NULL)
        {
            return -1;
        }
        else
        {
            Node *temp = head;
            int index = 1;
            while (temp != NULL)
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
      int search2(int val)
    {
        if (head == NULL)
        {
            return -1;
        }
        else
        {
            Node *temp = head;
            int index = 1;
            while (temp != NULL)
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
        while (head != NULL)
        {
            temp = head;
            head = head->next;
            delete temp;
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
    cout << "A singly linked list is being created!\n";

    while (true)
    {
        cout << "1. Insert First\n";
        cout << "2. Insert Last\n";
        cout << "3. Insert At\n";
        cout << "4. Delete First\n";
        cout << "5. Delete Last\n";
        cout << "6. Delete At\n";
        cout << "7. Forward Search\n";
        cout << "8. Backward Search\n";
        cout << "9. Print List\n";
        cout << "10. Exit\n";
        cout << "Enter Choice: ";
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
            int pos = list.search1(val);
            if (pos == -1)
                cout << "No list exists!\n";
            else if (pos)
                cout << "Position: " << pos << "\n\n";
            else
                cout << "Item not found in the list\n";
        }
        else if(choice ==8)
        {
                        cout << "Enter the value: ";
            int val;
            cin >> val;
            int pos = list.search2(val);
            if (pos == -1)
                cout << "No list exists!\n";
            else if (pos)
                cout << "Position: " << pos << "\n\n";
            else
                cout << "Item not found in the list\n";
        }
        else if (choice == 9)
            list.printList();
        else if (choice == 10)
            break;
        else
            cout << "Wrong Choice Input!!\n\n";
    }
    list.freeTheList();
    return 0;
}
