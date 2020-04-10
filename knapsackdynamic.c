#include<stdio.h>
int max(int x,int y)
{
    return (x>y)?x:y;
}
int knapSack(int W,int wt[],int val[],int n)
{
int i,w,S[10];
int K[n+1][W+1];
for(i=0;i<=n;i++)
{
    for(w=0;w<=W;w++)
    {
        if(i==0||w==0)
        K[i][w]=0;
        else if(wt[i-1]<=w)
        {
            K[i][w]=max(val[i-1]+K[i-1][w-wt[i-1]],K[i-1][w]);
        }
        else
        K[i][w]=K[i-1][w];
    }
}

for(i=0;i<=n;i++)
{
    for(w=0;w<=W;w++)
    {
        printf("%d ",K[i][w]);
    }
    printf("\n");
}
return K[n][W];
}

int main()
{
    int val[10];
int i, n, wt[20], W;
printf("Enter number of vegetables:");
scanf("%d", &n);
printf("Enter price and weight of vegetables:\n");
for(i = 0;i < n; ++i){
scanf("%d%d", &val[i], &wt[i]);
}
printf("Enter size of bag:");

scanf("%d", &W);
printf("\nMaximum %d RS of vegetables can be carried in the bag", knapSack(W, wt, val, n));
return 0;
}
