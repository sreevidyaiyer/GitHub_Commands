#include<stdio.h>
void knapsack(int n, float wt[],float pr[], float capacity)
{
    float x[20],tp=0.0,u;
     u=capacity;
     int i;
    for(i=0;i<n;i++)
    {
        x[i]=0.0;
    }
    for(i=0;i<n;i++)
    {
        if(wt[i]>u)
            break;
        else
        {
            x[i]=1.0;
            u=u-wt[i];
            tp=tp+pr[i];
        }
    }
    if(i<n)
    {
        x[i]=u/wt[i];
        tp=tp+x[i]*pr[i];
    }
    printf("The vector is ");
    for(i=0;i<n;i++)
    {
        printf("%f-->",x[i]);
    }
    printf("The total profit is %f",tp);
}
int main() {
   float wt[20], pr[20], capacity;
   int n, i, j;
   float ratio[20], temp;
   printf("Enter the number of objects available ");
   scanf("%d",&n);
   printf("Enter their weights and profits ");
   for(i=0;i<n;i++)
   {
       scanf("%f %f",&wt[i],&pr[i]);
   }
   for(i=0;i<n;i++)
   {
       ratio[i]=pr[i]/wt[i];
   }
   printf("Enter the capacity of the knapsack ");
   scanf("%f",&capacity);
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(ratio[i]<ratio[j])
           {
               temp=ratio[j];
               ratio[j]=ratio[i];
               ratio[i]=temp;
               temp=pr[j];
               pr[j]=pr[i];
               pr[i]=temp;
               temp=wt[j];
               wt[j]=wt[i];
               wt[i]=temp;
           }
       }
   }
   for(i=0;i<n;i++)
   {
       printf("\n%f %f ",wt[i],pr[i]);
   }
    knapsack(n,wt,pr,capacity);
}
