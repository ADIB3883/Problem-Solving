#include<iostream>
using namespace std;
#define NULL nullptr

struct Node {
  int val;
  Node *next;
};
Node *front = nullptr, *rear = nullptr;

bool enqueue(int value) {
  Node * nn= new Node;
  nn->val=value;
  nn->next=nullptr;
  if(front ==nullptr)
  {
      front = nn;
      rear=nn;
  }
  else
  {
      rear->next=nn;
      rear=nn;
    }
    return true;
}
bool isEmpty() {
    if(front == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int peek() {
    return front->val;

}
int dequeue() {
    Node* temp=front;
    front=temp->next;
    int p=temp->val;
    delete temp;
    return p;


}
bool isFull() {
    return false;
  }
void clear() {
    while(front !=nullptr)
    {
        Node*tem=front;
        front=front->next;
        delete tem;
    }

}


int main() {

  while(1) {
    cout<<"Select an option: "<<endl;
    cout<<"1. Enqueue"<<endl;
    cout<<"2. IsEmpty"<<endl;
    cout<<"3. Peek"<<endl;
    cout<<"4. Dequeue"<<endl;
    cout<<"5. IsFull"<<endl;
    cout<<"6. Clear"<<endl;
    cout<<"7. Exit"<<endl;

    int x;cin>>x;
    if(x == 1) {
      cout<<"Enter the value: ";
      int val;cin>>val;
      if(enqueue(val)) {
        cout<<"The value has been successfully inserted into the queue."<<endl<<endl;
      }
      else {
        cout<<endl<<"Queue is Full!!"<<endl<<endl;
      }
    }
    else if(x == 2) {
      if(isEmpty()) cout<<endl<<"The queue is empty!!!"<<endl<<endl;
      else cout<<endl<<"The queue is not empty!!!"<<endl<<endl;
    }
    else if(x == 3) {
      if(isEmpty()) cout<<endl<<"The queue is empty!!!"<<endl<<endl;
      else {
        int val = peek();
        cout<<endl<<"The first element of the queue is: "<<val<<endl<<endl;
      }
    }
    else if(x == 4) {
      if(isEmpty()) cout<<endl<<"The queue is empty!!!"<<endl<<endl;
      else {
        int val = dequeue();
        cout<<endl<<"The first element of the queue is: "<<val<<" and its successfully deleted."<<endl<<endl;
      }
    }
    else if(x == 5) {
      if(isFull()) cout<<endl<<"The queue is full!!!"<<endl<<endl;
      else cout<<endl<<"The queue is not full!!!"<<endl<<endl;
    }
    else if(x == 6) {
      clear();
      cout<<endl<<"The queue has been cleared!!!"<<endl<<endl;
    }
    else if(x == 7) break;
    else cout<<endl<<"Invalid option!!!"<<endl<<endl;
  }

  return 0;

}
