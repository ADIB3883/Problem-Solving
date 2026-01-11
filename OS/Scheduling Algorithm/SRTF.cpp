#include <bits/stdc++.h>
using namespace std;
class Process {
public:
    int id;   // Process ID
    int at;   // Arrival Time
    int bt;   // Burst Time
    int ct;   // Completion Time
    int tat;  // Turnaround Time
    int wt;   // Waiting Time
    int rbt;  // Remaining Burst Time
    bool completed;
    Process(int id, int at, int bt) {
        this->id = id;
        this->at = at;
        this->bt = bt;
        this->rbt = bt;
        this->ct = this->tat = this->wt = 0;
        this->completed = false;
    }
};
int main() {
    cout << "Enter the number of processes: ";
    int n;
    cin >> n;
    vector<Process> processes;
    for (int i = 0; i < n; i++) {
        int at, bt;
        cout << "Enter Arrival Time and Burst Time of P" << i + 1 << ": ";
        cin >> at >> bt;
        processes.push_back(Process(i + 1, at, bt));
    }
    int temp = n;
    int cur = 0;
    while (temp != 0) {
        int mn = INT_MAX;
        int idx = -1;
        // Pick process with shortest remaining burst time that has arrived
        for (int i = 0; i < n; i++) {
            if (cur >= processes[i].at && !processes[i].completed && processes[i].rbt < mn && processes[i].rbt > 0) {
                mn = processes[i].rbt;
                idx = i;
            }
        }
        if (idx == -1) {
            cur++; // No process available, increment time
            continue;
        }
        processes[idx].rbt--;  // Run for 1 unit of time
        cur++;
        if (processes[idx].rbt == 0) {
            processes[idx].ct = cur;
            processes[idx].tat = processes[idx].ct - processes[idx].at;
            processes[idx].wt = processes[idx].tat - processes[idx].bt;
            processes[idx].completed = true;
            temp--;
        }
    }
    double avg_tat = 0, avg_wt = 0;
    cout << "\nPR\tAT\tBT\tCT\tTAT\tWT" << endl;
    for (auto &p : processes) {
        cout << "P" << p.id << "\t" << p.at << "\t" << p.bt << "\t" 
             << p.ct << "\t" << p.tat << "\t" << p.wt << endl;
        avg_tat += p.tat;
        avg_wt += p.wt;
    }
    avg_tat /= n;
    avg_wt /= n;
    cout << "\nAverage Turnaround Time : " << avg_tat << "s" << endl;
    cout << "Average Waiting Time    : " << avg_wt << "s" << endl;

    return 0;
}
