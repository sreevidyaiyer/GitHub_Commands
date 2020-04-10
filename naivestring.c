#include<stdio.h>
#include<string.h>
int main()
{int m,n,i,j;
     char p[20], t[40];
     printf("Enter the pattern ");
     scanf("%s",p);
     printf("Enter the text ");
     scanf("%s",t);
     m=strlen(t);
     n=strlen(p);
     for(i=0;i<m-n;i++)
     {
     for(j=0;j<n;j++)
     {
         if(t[i+j]!=p[j])
            break;
     }
     if(j==n)
        {printf("Pattern found at index %d",i+1);
        }
     }
     if(i==m-n)
        printf("Pattern not found");
     return 0;

}
