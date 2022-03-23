#include <stdio.h>
#include <stdlib.h>
void func();
int main()
{
    int sel;
    func();
   do
    {  printf("Press 1 to continue:");
     scanf("%d",&sel);
        func();
    }while(sel==1);
}
void func()
{
    int b,N=1;
    printf("Enter the no of bits:\n");
    scanf("%d",&b);
    while(b!=0)
    {
        N*=2;
        --b;
    }

    printf("Total Level:%d\n", N);
    printf("The range of the Level is : 0 to %d \n", N-1);
}
