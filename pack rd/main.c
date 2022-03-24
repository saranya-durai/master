#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i;
   printf("enter the total no of bits:\n");
   scanf("%d",&n);
 int arr[n];
   for (i=1;i<=n;i++)
   {

   printf("ENter the vales of an array:\n");
   scanf("%d",&arr[i]);

    }
for (i=1;i<=n;i++)
    {
//   printf("the data are %d\n", arr[i]);
          if(arr[i]==1)
        printf("the bit is set at %d\n",i);


   }

}

