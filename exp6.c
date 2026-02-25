#include <stdio.h>
#define MAX_PROCESSES 10

void findWaitingTime(int processes[], int n, int bt[], int wt[]){
int remaining_bt[MAX_PROCESSES];
for(int i=0;i<n;i++){
remaining_bt[i]=bt[i];
}

int current_time=0;
int completed=0;

while(completed!=n){
int min_bt=9999;
int shortest=-1;

for(int i=0;i<n;i++){
if(remaining_bt[i]>0 && remaining_bt[i]<min_bt){
min_bt=remaining_bt[i];
shortest=i;
}
}

remaining_bt[shortest]--;
current_time++;

if(remaining_bt[shortest]==0){
completed++;
wt[shortest]=current_time-bt[shortest];
if(wt[shortest]<0)
wt[shortest]=0;
}
}
}

void findTurnAroundTime(int processes[],int n,int bt[],int wt[],int tat[]){
for(int i=0;i<n;i++)
tat[i]=bt[i]+wt[i];
}

void calculateAverageTime(int processes[],int n,int bt[]){
int wt[MAX_PROCESSES],tat[MAX_PROCESSES];
int total_wt=0,total_tat=0;

findWaitingTime(processes,n,bt,wt);
findTurnAroundTime(processes,n,bt,wt,tat);

printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");
for(int i=0;i<n;i++){
total_wt+=wt[i];
total_tat+=tat[i];
printf("%d\t\t%d\t\t%d\t\t%d\n",processes[i],bt[i],wt[i],tat[i]);
}
printf("\nAverage Waiting Time: %.2f\n",(float)total_wt/n);
printf("Average Turnaround Time: %.2f\n",(float)total_tat/n);
}

int main(){
int processes[]={1,2,3,4};
int burst_time[]={6,5,7,8};
int n=sizeof(processes)/sizeof(processes[0]);
calculateAverageTime(processes,n,burst_time);
return 0;
}

