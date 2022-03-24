#include <stdio.h>
#include <stdlib.h>

int main()
{
   int b,N,n,vref=5,sel,sel2;
    float size,vin,vout;
   //float v;
   do{
   printf("Enter the no of bit:\n");
   scanf("%d",&b);
   N=pow(2,b);
   printf("%d\n",N);
   do{
   printf("Enter the value in the range from 0 to %d\n",N);
   printf("Enter the value within the range:\n");
   scanf("%d",&n);

   size= vref / (double)N;
   printf("resolution : %f\n",size);
   vin=n* size;
   printf("vin %f\n",vin);
   vout= 2.4*vin; // by volteage divider rule with ref vin=5; vout=12
   printf("the output voltage is:%f\n",vout);
   printf("do you want to continue: Press 1 \n");
   scanf("%d",&sel);
   } while(sel==1);
   printf("do you want to change the bit: Press 2\n");
   scanf("%d", &sel2);
   } while(sel2==2);
}
