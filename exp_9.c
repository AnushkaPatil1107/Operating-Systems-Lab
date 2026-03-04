#include <stdio.h>

int main()
{
int n,i;
printf("Enter number of processes: ");
scanf("%d",&n);

int at[20],bt[20],rt[20];
int ct[20],tat[20],wt[20];
int done[20]={0};

for(i=0;i<n;i++)
{
printf("\nProcess P%d\n",i+1);
printf("Arrival Time: ");
scanf("%d",&at[i]);
printf("Burst Time: ");
scanf("%d",&bt[i]);
rt[i]=bt[i];
}

int time=0,completed=0;

while(completed<n)
{
int max_rt=-1;
int index=-1;

for(i=0;i<n;i++)
{
if(at[i]<=time && done[i]==0)
{
if(rt[i]>max_rt)
{
max_rt=rt[i];
index=i;
}
}
}

if(index!=-1)
{
rt[index]--;
time++;

if(rt[index]==0)
{
ct[index]=time;
tat[index]=ct[index]-at[index];
wt[index]=tat[index]-bt[index];
done[index]=1;
completed++;
}
}
else
{
time++;
}
}

printf("\nP\tAT\tBT\tCT\tTAT\tWT\n");

for(i=0;i<n;i++)
{
printf("P%d\t%d\t%d\t%d\t%d\t%d\n",i+1,at[i],bt[i],ct[i],tat[i],wt[i]);
}

return 0;
}
