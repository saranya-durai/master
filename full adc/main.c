#include <stdio.h>
#include <stdlib.h>


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
int b,vref=1,i;
    float vol,ref=5,res,tmp;
printf("enter the no of bits:");
scanf("%d",&b);
printf("Enter the input voltage:");
scanf("%f", &vol);
for(i=0;i<=b;i++)
{
    vref=(2*vref);
}
//printf("total level:%d",vref);
tmp= (vref/ (double)ref);
printf("%f\n", tmp);
res= vol*tmp;
//printf("the quantization level: %f", res);

//int n, vref=1024;
//printf("Enter the value:\n");
  //  scanf("%d", &n);
    P = (res / (double)vref)*100 ;
    printf("the battery status: %f \n",P);
}




