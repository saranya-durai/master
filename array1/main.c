#include<stdio.h>
int main ()
{ int i,n,j;
    float arr[100],max,min,tmp,tmp1;
    printf("Enter the size of the array?");
    scanf("%d",&n);
    printf("Enter the elements of the array?");
    for(i = 0; i<n; i++)
    {
        scanf("%f",&arr[i]);
    }
    max = arr[0];
    min = arr[1];
    for(j=0;j<n;j++)
    {
        if(arr[j]>max)
        {
            tmp= max;
            max = arr[j];
        }
       else if(arr[j]<min)
        {
            tmp1=min;
            min=arr[j];
        }
    }
    printf("max = %f, min = %f",max,min);

}
