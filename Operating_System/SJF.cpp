#include<bits/stdc++.h> 
using namespace std; 
  
struct Process { 
    int pid;  
    int bt;  
}; 
  
bool cmp(Process a, Process b) { 
    return (a.bt < b.bt); 
} 
  
void findWaitingTime(vector<Process> &proc, int n, int wt[]) { 
    wt[0] = 0; 
  
    for (int i = 1; i < n ; i++ ) 
        wt[i] = proc[i-1].bt + wt[i-1]; 
} 
  
void findTurnAroundTime(vector<Process> &proc, int n, int wt[], int tat[]) { 
    for (int i = 0; i < n ; i++) 
        tat[i] = proc[i].bt + wt[i]; 
} 
  
void findavgTime(vector<Process> &proc, int n) {

    int wt[n], tat[n], total_wt = 0, total_tat = 0; 
  
    findWaitingTime(proc, n, wt); 
  
    findTurnAroundTime(proc, n, wt, tat); 
  
    cout << "Processes "<< " Burst time " 
         << " Waiting time " << " Turn around time\n"; 
  
    for (int i = 0; i < n; i++) { 
        total_wt += wt[i]; 
        total_tat += tat[i]; 
        cout << " " << proc[i].pid << "\t\t" << proc[i].bt << "\t\t " << wt[i] << "\t\t " << tat[i] << endl; 
    } 
  
    cout << "Average waiting time = " << (float)total_wt / n << endl; 
    cout << "Average turn around time = " << (float)total_tat / n << endl; 
} 
  
int main() { 
    
    vector<Process> proc = {{1, 6}, {2, 8}, {3, 7}, {4, 3}}; 
    int n = proc.size(); 
  
    sort(proc.begin(), proc.end(), cmp); 
  
    cout << "Order in which process gets executed\n"; 
    for (int i = 0 ; i < n; i++) 
        cout << proc[i].pid << " "; 
    cout << endl;
  
    findavgTime(proc, n); 
    return 0; 
} 
