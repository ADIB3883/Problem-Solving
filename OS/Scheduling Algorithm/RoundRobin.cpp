#include <bits/stdc++.h>
using namespace std;
class Process {
public:
    int id;       // Process ID
    int at;       // Arrival Time
    int bt;       // Burst Time
    int ct;       // Completion Time
    int tat;      // Turnaround Time
    int wt;       // Waiting Time
    int rbt;      // Remaining Burst Time
    bool completed;
    bool inQueue;
    Process(int id, int at, int bt) {
        this->id = id;
        this->at = at;
        this->bt = bt;
        this->rbt = bt;
        this->ct = this->tat = this->wt = 0;
        this->completed = false;
        this->inQueue = false;
    }
};
int main() {
    cout << "Enter the number of processes: ";
    int n, qtm;
    cin >> n;
    vector<Process> processes;
    for (int i = 0; i < n; i++) {
        int at, bt;
        cout << "Enter Arrival Time and Burst Time of P" << i + 1 << ": ";
        cin >> at >> bt;
        processes.push_back(Process(i + 1, at, bt));
    }
    cout << "Enter the Quantum Time: ";
    cin >> qtm;
    queue<int> q;
    int temp = n;
    int cur = 0;
    while (temp != 0) {
        // Push new processes that have arrived
        for (int i = 0; i < n; i++) {
            if (cur >= processes[i].at && processes[i].rbt > 0 && !processes[i].completed && !processes[i].inQueue) {
                q.push(i);
                processes[i].inQueue = true;
            }
        }
        if (q.empty()) {  // If no process is ready, just move time forward
            cur++;
            continue;
        }
        int idx = q.front();
        q.pop();
        processes[idx].inQueue = false;
        if (processes[idx].rbt > qtm) {
            processes[idx].rbt -= qtm;
            cur += qtm;
        } else {
            cur += processes[idx].rbt;
            processes[idx].rbt = 0;
            processes[idx].completed = true;
            processes[idx].ct = cur;
            processes[idx].tat = processes[idx].ct - processes[idx].at;
            processes[idx].wt = processes[idx].tat - processes[idx].bt;
            temp--;
        }
        // Check if new processes arrived during this time slice
        for (int i = 0; i < n; i++) {
            if (cur >= processes[i].at && processes[i].rbt > 0 && !processes[i].completed && !processes[i].inQueue) {
                q.push(i);
                processes[i].inQueue = true;
            }
        }
        // If process still has burst time left, put it back in the queue
        if (!processes[idx].completed && !processes[idx].inQueue) {
            q.push(idx);
            processes[idx].inQueue = true;
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
