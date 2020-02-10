#include<stdio.h>
int main(){

int i,j,pid[100],at[100],bt[100],ct[100],tat[100],wt[100],temp=0,n,temp1=0;
float avg_wt=0,avg_tat=0,sum=0,sum1=0;

printf("Enter the no of process:\n");
scanf("%d",&n);
printf("Enter the ids,arrival time and burst time of processes:\n");
for(i=0;i<n;i++)
   {

    scanf("%d%d%d",&pid[i],&at[i],&bt[i]);
    printf("\n%d is id of %d\n\n ",pid[i],i);}
    printf(" for 2nd process at is %d and bt is %d \n\n",at[1],bt[1]);

 for(i=0;i<n-1;i++){
    for(j=0;j<n;j++){
        if(at[j]>at[j+1]){
            temp=at[j];
            at[j]=at[j+1];
            at[j+1]=temp;

            temp=bt[j];
            bt[j]=bt[j+1];
            bt[j+1]=temp;

            temp=pid[j];
            pid[j]=pid[j+1];
            pid[j+1]=temp;
        }
    }
 }
 printf(" for 2nd process at is %d and bt is %d \n\n",at[1],bt[1]);

 ct[0]=at[0]+bt[0];
 printf(" for 2nd process at is %d and bt is %d \n\n",at[1],bt[1]);
 tat[0]=ct[0]-at[0];
 printf(" for 2nd process at is %d and bt is %d \n\n",at[1],bt[1]);
 wt[0]=tat[0]-bt[0];
 printf(" for 2nd process at is %d and bt is %d \n\n",at[1],bt[1]);
 sum=sum+wt[0];
 printf(" for 2nd process at is %d and bt is %d \n\n",at[1],bt[1]);
 sum1=sum1+tat[0];
 printf(" for 2nd process at is %d and bt is %d \n\n",at[1],bt[1]);


temp1=ct[0];
printf(" for 2nd process at is %d and bt is %d \n\n",at[1],bt[1]);
printf(" ct of 0 is %d\n",ct[0]);
printf(" for 2nd process at is %d and bt is %d \n\n",at[1],bt[1]);
 for(i=1;i<n;i++){

    if(at[i]>temp1){
            printf("i am also in if block \n\n");
            while(temp1<at[i])
            {temp1=temp1+1;}

        ct[i]=temp1+bt[i];

        printf(" ct of %d is %d\n",i,ct[i]);
        printf("i am in if\n\n");
        temp1=ct[i];


    tat[i]=ct[i]-at[i];
    wt[i]=tat[i]-bt[i];
    sum=sum+wt[i];
    sum1=sum1+tat[i];
    continue;
    }
    else{

     ct[i]=temp1+bt[i];
     printf(" ct of %d id %d\n",i,ct[i]);
     printf("i am in else\n");
     temp1=ct[i];

    tat[i]=ct[i]-at[i];
    wt[i]=tat[i]-bt[i];
    sum=sum+wt[i];
    sum1=sum1+tat[i];
    continue;
    }
 }




 avg_tat=sum1/n;
 avg_wt=sum/n;






    printf("-----------------------------------------------\n");
    printf("------------------TABLE-------------------------\n");
    printf("\t IDs \tAT \tBT \tCT \tTAT \tWT\n");

    for(i=0;i<n;i++){
            printf("\t %d\t %d\t %d\t %d\t %d\t %d\n",pid[i],at[i],bt[i],ct[i],tat[i],wt[i]);

    }
   // printf("Average turn around time is %f \n And the average waiting time is %f",avg_tat,avg_wt);





}
