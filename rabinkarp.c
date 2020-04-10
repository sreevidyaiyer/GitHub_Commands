#include<stdio.h>
#include<string.h>
int main()
{int m,n,i,j,mod=101,p=0,t=0,d=100,h=1;
     char pa[20], te[40];
     printf("Enter the pattern ");
     scanf("%s",pa);
     printf("Enter the text ");
     scanf("%s",te);
     m=strlen(te);
     n=strlen(pa);
     for(i=0;i<n-1;i++)
        h=(d*h)%mod;

    for(i=0;i<n;i++)
    {
        p=(d*p+pa[i])%mod;
        t=(d*t+te[i])%mod;
    }
     for(i=0;i<=m-n;i++)
     {printf("%d %d \n",p,t);
     if(p==t)
     {for(j=0;j<n;j++)
     {
         if(te[i+j]!=pa[j])
            break;
     }
     if(j==n)
        printf("Pattern found at index %d",i+1);
     }
     if(i<m-n)
        {t=(d*(t-te[i]*h)+te[i+n])%mod;
        if(t<0)
        t=t+mod;}}
     if(i==m-n)
        printf("Pattern not found");
     return 0;

}
