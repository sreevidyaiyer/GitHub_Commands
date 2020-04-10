#include<stdio.h>
#include<stdlib.h>
int arr[10];
insertion(int arr[],int n)
{
int i,j,temp,k;
for(j=1;j<n;j++)
{
    i=j-1;
    temp=arr[j];
    while(i>=0&&arr[i]>=temp)
    {      arr[i+1]=arr[i];
        i--;
    }
    i++;
    arr[i]=temp;
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
insertion(arr,n);
 printf("\n");
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
return 0;
}

