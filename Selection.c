#include<stdio.h>
#include<stdlib.h>
int arr[10];
selection(int arr[],int n)
{
int min,i,j,temp,k;
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(arr[j]<arr[min])
min=j;
}
temp=arr[i];
arr[i]=arr[min];
arr[min]=temp;
for (k= 0; k< n; k++)
    {
      printf("%d ", arr[k]);
    }
    printf("\n");
}
}
int main()
{
int i, n;
printf("Enter the number of items to sort ");
scanf("%d",&n);
printf("Enter the numbers ");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
selection(arr,n);
return 0;
}

