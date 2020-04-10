#include<stdio.h>
int min(int dmax,int d)
{
    if(dmax>d)
        return d;
    else
        return dmax;
}
void jobS(int d[],int pr[],int n)
{
    int i,j,k,max=0;
    int emptime[n];
    int filledtime=0;
    int dmax=0;
    for(i=0;i<n;i++)
    {
        if(d[i]>dmax)
            dmax=d[i];
    }
    for(i=1;i<=dmax;i++)
    {
        emptime[i]=-1;
    }
      printf("dmax: %d\n", dmax);
    for(i = 1; i <= n; i++)
    {
        k = min(dmax, d[i-1]);
        while(k >= 1)
        {
        if(emptime[k] == -1)
        {
        emptime[k] = i-1;
        max=max+pr[i-1];
        filledtime++;
        break;
        }
         k--;
         }
    //if all time slots are filled then stop
    if(filledtime == dmax)
      break;
  }
  printf("\nMax profit: %d\n", max);
}

int main()
{
 int d[10],pr[10],n,i,j,temp;
 printf("Enter the max number of jobs ");
 scanf("%d",&n);
 printf("Enter the profits and deadlines ");
 for(i=0;i<n;i++)
 {
     scanf("%d %d",&pr[i],&d[i]);
 }
 for(i=0;i<n;i++)
 {
     for(j=i+1;j<n;j++)
     {
         if(pr[i]<pr[j])
         {
             temp=pr[j];
             pr[j]=pr[i];
             pr[i]=temp;
             temp=d[j];
             d[j]=d[i];
             d[i]=temp;

         }
     }
 }
 jobS(d,pr,n);
}
