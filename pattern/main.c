#include <stdio.h>

int main()
{
    int n,m=1;
    printf("Enter the number of rows");
    scanf("%d",&n);

   for(int i=n;i>=1;--i)
   {
       for(int j=1;j<=n;j++)
       {
           printf(" ");
           if(j==(n/2)||j==(n/2)+1||i==n||i==n-1)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
       }

       //m++;

      printf("\n");
    }
    return 0;
}
