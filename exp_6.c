#include<stdio.h>
#define MAX_PROCESSES 10
void findWaitingTime(int p[],int n,int bt[],int wt[]){
int r[MAX_PROCESSES];
for(int i=0;i<n;i++)r[i]=bt[i];
int t=0,c=0,s,m,f;
while(c!=n){
m=9999;s=-1;
for(int i=0;i<n;i++)if(r[i]>0&&r[i]<m){m=r[i];s=i;}
if(s==-1){t++;continue;}
r[s]--;t++;
if(r[s]==0){
c++;f=t;wt[s]=f-bt[s];
if(wt[s]<0)wt[s]=0;
}}
}
void findTurnAroundTime(int p[],int n,int bt[],int wt[],int tat[]){
for(int i=0;i<n;i++)tat[i]=bt[i]+wt[i];
}
void calculateAverageTime(int p[],int n,int bt[]){
int wt[MAX_PROCESSES],tat[MAX_PROCESSES],tw=0,tt=0;
findWaitingTime(p,n,bt,wt);
findTurnAroundTime(p,n,bt,wt,tat);
printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");
for(int i=0;i<n;i++){
tw+=wt[i];tt+=tat[i];
printf("%d\t\t%d\t\t%d\t\t%d\n",p[i],bt[i],wt[i],tat[i]);
}
printf("\nAverage Waiting Time: %.2f\n",(float)tw/n);
printf("Average Turnaround Time: %.2f\n",(float)tt/n);
}
int main(){
int p[]={1,2,3,4};
int bt[]={6,5,7,8};
int n=sizeof(p)/sizeof(p[0]);
calculateAverageTime(p,n,bt);
return 0;
}
