#include<bits/stdc++.h>
using namespace std;

// Item structure
struct item
{
    int value;
    int weight;
    float ratio_;

    item(int v, int w)
    {
        value = v;
        weight = w;
        ratio_ = (float)v / w;
    }
};

// Print items
void printItem(vector<item>& items)
{
    cout << "==================================================" << endl;
    for(int i = 0; i < items.size(); i++)
    {
        cout << i+1 << "th item having value: " << items[i].value 
             << " and weight: " << items[i].weight 
             << " and ratio: " << items[i].ratio_ << endl;
    }
    cout << "==================================================" << endl;
}

// Comparison function
bool com(item a, item b)
{
    return a.ratio_ > b.ratio_;
}

// Fractional Knapsack Function
float f_knapsack(int n, int w, vector<item>& items)
{
    sort(items.begin(), items.end(), com); // Sort by ratio
    float profit = 0;

    for(int i = 0; i < items.size(); i++)
    {
        if(w >= items[i].weight)  // Take the whole item
        {
            profit += items[i].value;
            w -= items[i].weight;
            cout << "Taking " << i+1 << "th item of weight: " 
                 << items[i].weight << " and value: " << items[i].value << endl;
        }
        else  // Take fractional part
        {
            profit += (w * items[i].ratio_);
            cout << "Taking fraction of " << i+1 << "th item of weight: " 
                 << w << " and value: " << w * items[i].ratio_ << endl;
            break;
        }
    }
    return profit;
}

// Main function
int main()
{
    cout << "Number of items: ";
    int n;
    cin >> n;

    cout << "Weight of knapsack: ";
    int w;
    cin >> w;

    vector<item> items;
    for(int i = 1; i <= n; i++)
    {
        int value, weight;
        cout << "Enter the value and weight of " << i << "th item: ";
        cin >> value >> weight;
        items.push_back(item(value, weight));
    }

    printItem(items);
    
    float profit = f_knapsack(n, w, items);
    cout << "Maximum profit: " << profit << endl<<endl;
       printItem(items);

    return 0;
}
