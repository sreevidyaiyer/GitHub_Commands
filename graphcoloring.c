#include<stdio.h>
int G[20][20],x[20];
void color(int i,int n)
{
    int k;
    x[i]=1;
    for(k=0;k<n;k++)
    {if(G[i][k]!=0&&x[i]==x[k]&&i!=k)
    x[i]=x[k]+1;}
}
int main()
{int i,j,n,max;
    printf("Enter the number of vertices");
    scanf("%d",&n);
    printf("\n Enter the adjacency matrix i.e 1 if there is an edge and 0 if there is none\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&G[i][j]);
        }
    }
    for(i=0;i<n;i++)
    color(i,n);
    max=x[0];
    printf("Colors assigned are \n");
    for(i=0;i<n;i++)
    {
      printf("vertex[%d]: %d\n",i+1,x[i]);
      if(x[i]>max)
            max=x[i];
    }
    printf("The total number of colors required are %d",max);
    return 0;
}
