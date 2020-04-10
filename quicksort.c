#include<stdio.h>
#include<stdlib.h>
int arr[10];
int partition(int p,int r)
{
int i,j,pivot,temp;
pivot=arr[r];
i=p-1;
for(j=p;j<r;j++)
{
    if(arr[j]<=pivot)
    {
        i++;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }}
    i++;
    temp=arr[i];
    arr[i]=arr[r];
    arr[r]=temp;
    return i;

}
void quicksort(int p,int r)
{int q;
if(p<r)
{
q=partition(p,r);
quicksort(p,q-1);
quicksort(q+1,r);
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
quicksort(0,n-1);
printf("\n");
for (i= 0; i< n; i++)
    {
      printf("%d ", arr[i]);
    }
return 0;
}

