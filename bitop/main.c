#include<stdio.h>

int main()

{

int num, i;

printf("Enter the number\n");

scanf("%d",&num);

printf("Enter the bit to check whether it is set or not\n");

scanf("%d",&i);

if((num>>i)&1)

printf("%d bit is set for number %d\n", i,num);

else

printf("%d bit is not set for number %d\n", i,num);

return 0;

}
