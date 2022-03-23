#include <stdio.h>
#include <stdlib.h>

int main()
{
    //vout=vin.z2/(z2+z1);
    float z1,z2,vin,vout;
    printf("Enter the input voltage from the sensor:\n");
    scanf("%f", &vin);
   // z=z2 / (double)(z1+z2);
    vout= vin*0.417;
    printf("the output voltage is : %f\n",vout);
}
