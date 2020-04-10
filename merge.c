#include<stdio.h>
#include<stdlib.h>
int arr[10];
void merge(int l,int m,int r)
{
int n1=m-l+1,i,j,k;
int n2=r-m;
int lr[n1],rr[n2];
for(i=0;i<n1;i++)
{
lr[i]=arr[l+i];
}
for(j=0;j<n2;j++)
{
rr[j]=arr[m+1+j];
}
i=0;
j=0;
k=l;
while(i<n1&&j<n2)
{
if(lr[i]<=rr[j])
{arr[k]=lr[i];
i++;}
else
{arr[k]=rr[j];
j++;}
k++;
}
while(i<n1)
   {
       arr[k]=lr[i];
       i++;
        k++;
   }
while(j<n2)
   {
       arr[k]=rr[j];
       j++;
        k++;
   }
}
void mergesort(int l,int r)
{int m;
if(l<r)
{
m=l+(r-l)/2;
mergesort(l,m);
mergesort(m+1,r);
merge(l,m,r);
}
}

int main()
{
int i, n,k;
printf("Enter the number of items to sort ");
scanf("%d",&n);
printf("Enter the numbers ");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
mergesort(0,n-1);
printf("\n");
for (i= 0; i< n; i++)
    {
      printf("%d ", arr[i]);
    }
return 0;
}

