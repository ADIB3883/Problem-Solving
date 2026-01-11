#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    map<pair<string, int>, multiset<int>> registry;
    while (q--) {
        string command;
        cin >> command;
        if (command == "i") {
            string name;
            int id;
            cin >> name >> id;
            registry[{name, id}]; 
        } else if (command == "d") {
            string name;
            int id;
            cin >> name >> id;
            registry.erase({name, id});
        } else if (command == "c") {
            registry.clear();
        } else if (command == "s") {
            cout << registry.size() << '\n';
        } else if (command == "p") {
            string name;
            int id, mark;
            cin >> name >> id >> mark;
            registry[{name, id}].insert(mark);
        } else if (command == "r") {
            string name;
            int id;
            cin >> name >> id;
            registry[{name, id}].clear(); 
        } else if (command == "u") {
            string name;
            int id;
            cin >> name >> id;
            set<int> unique_marks(
                registry[{name, id}].begin(),
                registry[{name, id}].end()
            );
            cout << unique_marks.size() << '\n';
        }
    }
    return 0;
}
