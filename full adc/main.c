#include <stdio.h>
#include <stdlib.h>

void func();

   float P;
 int main()
{
    func();

      int select;

    do
    {
    printf("press 1 to continue :\n");
    scanf("%d", & select);
    func();

    } while(select==1);
}

void func()
{
float vin,vout;
printf("enter the input voltage:\n");
scanf("%f",&vin);
vout=vin*0.41666;//max output voltage from sensor is 12; max input to the mcu is 5....>>>> 5/12=0.4166
printf("the output voltage is:%f\n", vout);
int b,vref=1,i;
    float vol,ref=5,res,tmp;
printf("enter the no of bits:");
scanf("%d",&b);
vol=vout;
//printf("Enter the input voltage:");
//scanf("%f", &vol);
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

