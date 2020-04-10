#include<stdio.h>
#include<stdlib.h>
int arr[10];
int min,max;
void minmax(int i,int j)
{int m, min1,max1;
if(i==j)
{
min=max=arr[i];
}
else if(i==j-1)
{
    if(arr[i]>arr[j])
    {
        min=arr[j];
        max=arr[i];
    }
    else
    {
        min=arr[i];
        max=arr[j];
    }
}
else
{
    m=(i+j)/2;
    minmax(i,m-1);
    min1=min;
    max1=max;
    minmax(m,j);
    if(min>min1)
        min=min1;
    else
        min=min;
    if(max1>max)
    max=max1;
    else
        max=max;
}
}

int main()
{
int i, n,k;
printf("Enter the number of items in array ");
scanf("%d",&n);
printf("Enter the numbers to find min and max ");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
minmax(0,n-1);
printf("\n");
printf("The max element is %d, min element is %d ",max,min);
return 0;
}

