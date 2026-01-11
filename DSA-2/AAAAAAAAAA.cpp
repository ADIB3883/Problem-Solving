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
#define Case(a) cout<<"Case "<<a<<": "
#define CaseN(a) cout<<"Case "<<a<<": "
#define psum(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1)
#define pxor(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return x^y;})
#define pgcdLeft(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define pgdcRight(vc,sm) partial_sum(vc.rbegin(),vc.rend(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
#define MAX_SIZE 99
using namespace std;

ll counts = 0;

struct bill
{
    string name;
    ll amount;
    ll timestamp;

    bill()
    {
        this->name = "";
        this->amount = 0;
        this->timestamp = 0;
    }

    bill(string name, ll amount, ll timestamp)
    {
        this->name = name;
        this->amount = amount;
        this->timestamp = timestamp;
    }
};

class PQ
{
public:
    bill heap[MAX_SIZE + 1];
    unordered_map<string, ll> nameToIndex;
    ll size;
    PQ()
    {
        size = 0;
    }

    void heapInsertOrUpdate(bill val)
    {
        if (nameToIndex.find(val.name) != nameToIndex.end())
        {
            ll index = nameToIndex[val.name];
            if (val.amount > heap[index].amount)
            {
                heap[index].amount = val.amount;
                heap[index].timestamp = val.timestamp;
                heapifyUp(index);
                //heapifyDown(index);
            }
        }
        else
        {
            if (size >= MAX_SIZE)
            {
                cout << "Heap is full. Cannot insert more bills." << endl;
                return;
            }
            size++;
            heap[size] = val;
            nameToIndex[val.name] = size;
            heapifyUp(size);
        }
    }

    void heapifyUp(ll index)
    {
        if (index == 1)
        {
            return;
        }
        ll parent = index / 2;
        if (heap[index].amount > heap[parent].amount ||
                (heap[index].amount == heap[parent].amount && heap[index].timestamp < heap[parent].timestamp))
        {
            swap(heap[index], heap[parent]);
            nameToIndex[heap[index].name] = index;
            nameToIndex[heap[parent].name] = parent;
            heapifyUp(parent);
        }
    }
    void heapifyDown(ll index)
    {
        ll left = 2 * index;
        ll right = 2 * index + 1;
        ll largest = index;

        if (left <= size && (heap[left].amount > heap[largest].amount ||
                             (heap[left].amount == heap[largest].amount && heap[left].timestamp < heap[largest].timestamp)))
        {
            largest = left;
        }
        if (right <= size && (heap[right].amount > heap[largest].amount ||
                              (heap[right].amount == heap[largest].amount && heap[right].timestamp < heap[largest].timestamp)))
        {
            largest = right;
        }
        if (largest != index)
        {
            swap(heap[index], heap[largest]);
            nameToIndex[heap[index].name] = index;
            nameToIndex[heap[largest].name] = largest;
            heapifyDown(largest);
        }
    }
    void deleteMax()
    {
        if (size == 0)
        {
            cout << "No bills to delete." << endl;
            return;
        }
        nameToIndex.erase(heap[1].name);
        heap[1] = heap[size];
        nameToIndex[heap[1].name] = 1;
        size--;
        heapifyDown(1);
    }
    void processBill()
    {
        if (size == 0)
        {
            cout << "No bills to process." << endl;
            return;
        }
        cout << heap[1].name << ", Amount: " << heap[1].amount << ", Timestamp: " << heap[1].timestamp << endl;
        deleteMax();
    }
    void peekBill()
    {
        if (size == 0)
        {
            cout << "No bills to peek." << endl;
        }
        else
        {
            cout << "Highest priority bill: Name: " << heap[1].name << ", Amount: " << heap[1].amount << endl;
        }
    }
    ll findMinIndex()
    {
        if (size == 0) return -1;

        ll minIndex = 1;
        for (ll i = 2; i <= size; i++)
        {
            if (heap[i].amount < heap[minIndex].amount ||
                    (heap[i].amount == heap[minIndex].amount && heap[i].timestamp < heap[minIndex].timestamp))
            {
                minIndex = i;
            }
        }
        return minIndex;
    }
    void deleteAtIndex(ll r)
    {
                if (size == 0)
        {
            cout << "No bills to delete." << endl;
            return;
        }
        nameToIndex.erase(heap[1].name);
        heap[r] = heap[size];
        nameToIndex[heap[1].name] = 1;
        size--;
        heapifyDown(1);
    }

    void processMinBill()
    {
        if (size == 0)
        {
            cout << "No bills to process." << endl;
            return;
        }
        ll minIndex = findMinIndex();
        cout << "Processed bill: " << heap[minIndex].name << ",  Amount: " << heap[minIndex].amount << ", Timestamp: " << heap[minIndex].timestamp << endl;

        nameToIndex.erase(heap[minIndex].name);
        heap[minIndex] = heap[size];
        nameToIndex[heap[minIndex].name] = minIndex;
        size--;
        heapifyDown(minIndex);
    }
};

int main()
{
    cout << "Press Q to Exit." << endl << endl;
   ll w;
    PQ h;
    ll i = 0;
    string name;
    ll amount;
    ll processedCount = 0;
    cout<<"Select\n\n1. Insert\n";
    cout<<"2. Remove Max(Dequeue)\n";
    cout<<"3. Peek\n";
    cout<<"4. Update\n";
    cout<<"5. Find Min\n";
    cout<<"6. Delete at index i\n";
    while (true)
    {
        cout<<"\nSelect Option\n";
        cin>>w;
        if(w==1)
        {
                  cout << "Enter Customer " << ++i << ":" << endl;
        cout << "Name: ";
        cin >> name;

        if (name == "Q")
        {
            break;
        }

        cout << "Amount: ";
        cin >> amount;

        counts++;
        bill b(name, amount, counts);
        h.heapInsertOrUpdate(b);
        }
        else if(w==2)
        {
            h.deleteMax();
        }
        else if(w==3)
        {
            h.peekBill();
        }
        else if(w==4)
        {
                          cout << "Enter Customer " << ++i << ":" << endl;
        cout << "Name: ";
        cin >> name;

        if (name == "Q")
        {
            break;
        }

        cout << "Amount: ";
        cin >> amount;

        counts++;
        bill b(name, amount, counts);
        h.heapInsertOrUpdate(b);
        }
        else if(w==5)
        {
            cout<<"The Index of minimum is : "<<h.findMinIndex()<<endl;
        }
        else if(w==6)
        {
            ll r;
            cout<<"Select the index where deletion is to be done : ";
            cin>>r;
            h.deleteAtIndex(r);
        }

    }

    //my  roll id is 16.so,16%9=7
    cout<<"Processed bill: \n";
    while (h.size > 0)
    {
        if (processedCount == 7)
        {
            h.processMinBill();
            processedCount = 0;
        }
        else
        {
            h.processBill();
            processedCount++;
        }
    }

    cout << "No bills to process." << endl;

    return 0;
}
