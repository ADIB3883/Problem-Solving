#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin >> q;
    deque<string> miraz, rafsan, mahir;
    while (q--) {
        string type;
        cin >> type;
        if (type == "i") {
            string name;
            cin >> name;
            miraz.push_back(name);
            rafsan.push_back(name);
            if (name == "BUP")
                mahir.push_front(name);
            else
                mahir.push_back(name);
        } else if (type == "d") {
            string m = miraz.empty() ? "NA" : miraz.front();
            if (!miraz.empty()) miraz.pop_front();
            string r = rafsan.empty() ? "NA" : rafsan.back();
            if (!rafsan.empty()) rafsan.pop_back();
            string h = mahir.empty() ? "NA" : mahir.front();
            if (!mahir.empty()) mahir.pop_front();
            cout << m << " " << r << " " << h << "\n";
        }
    }
    return 0;
}
