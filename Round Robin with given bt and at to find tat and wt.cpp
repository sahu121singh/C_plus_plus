#include<bits/stdc++.h>
using namespace std;

void turnaround(int *wt_time, int *tat_time, int n, int bt[], int ct[], int at[]) {
    for(int i = 0; i < n; i++) {
        tat_time[i] = ct[i] -  at[i];
        wt_time[i] = tat_time[i] -  bt[i];
    }
}


void wait(int *wt, int *ct, int n, int bt[], int quantum, int at[]) {
    int rem_time[n];
    
    for(int i = 0; i < n; i++)
        rem_time[i] = bt[i];
    
    int tot = 0;
    int arrival = 0;
    
    while(true) {
        bool done = true;
        for(int i = 0; i < n; i++) {
            if(rem_time[i] > 0) {
                done = false;
                if(rem_time[i] > quantum && at[i] <= tot) {
                    tot += quantum;
                    rem_time[i] -= quantum;
                    //arrival++;
                }
                else {
                    if(at[i] <= tot) {
                        //arrival++;
                        tot += rem_time[i];
                        rem_time[i] = 0;
                        ct[i] = tot;
                    }
                }
            }
            else{
                continue;
            }
        }
        
        if(done==true) 
        break;
    } 
}

int fun(int n, int quantum, int arrival_time[], int burst_time[]){
    int wt_time[n];
    int tat_time[n];
    int completion_time[n];
    int total_wt = 0, total_tat = 0;
    
    wait(wt_time, completion_time, n, burst_time, quantum, arrival_time);
    turnaround(wt_time, tat_time, n, burst_time, completion_time, arrival_time);
    
    for (int i = 0; i < n; i++) { 
        total_wt = total_wt + wt_time[i]; 
        total_tat = total_tat + tat_time[i]; 
    }
    for (int i = 0; i < n; i++) {
        cout<<completion_time[i]<<"---"<<tat_time[i]<<"---"<<wt_time[i]<<"\n";
    }
}

int main() {
    int at[] = {0, 1, 2};
    int bt[] = {3, 2, 1};
    fun(3, 2, at, bt);
}