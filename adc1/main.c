#include <stdio.h>
#include <stdlib.h>

void func();

 float P;
 int main()
{

      int select;

    do
    {
         func();
    printf("press 1 to continue :\n");
    scanf("%d", & select);

    } while(select==1);
}

void func()
{
int n, vref=1024;
printf("Enter the value:\n");
    scanf("%d", &n);
    P = (n / (double)vref)*100 ;
    printf("the battery status: %f \n",P);
}
