
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,range,N,i,a[50],bin,n;
    printf(" ENter the no of bits:\n");
    scanf("%d",&b);
    //range=pow(2,b);
    //printf("the range are 0 to %d \n", range-1);


    printf("ENter the no to check:\n");
    scanf("%d",&N);

 for (i=0;i<=b;i++)
 {
    a[i]=N%2;
    N=N/2;
 }

 //display the binary value
 printf("to know the binary value: press 5\n");
 scanf("%d",&bin);
 if (bin==5)
 for(i=b-1;i>=0;i--)
 {
      printf("%d",a[i]);
 }
printf("binary value:%d",&a[i]);
if((a[i]>>1)&1)

printf("%d bit is set for number %d\n", i,num);

//else

//printf("%d bit is not set for number %d\n", i,num);

return 0;

}

