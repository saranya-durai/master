#include <stdio.h>
#include <stdlib.h>

//void func();
void func1();

 float P;
// int N;
 int main()
{

    int select;
 func1();
     do
    {
        // func1();
    printf("Do u want to change the bits, press 2 to continue or press any key to exit:\n");
    scanf("%d", & select);

    } while(select==2);
}


void func1()
{
    int n,N,b,sel;
    char Y;
    printf("Enter the no of bits:\n");
    scanf("%d",&b);
    N= pow(2,b);//............n=2^b
    printf("Total Level:%d\n", N);
    printf("The range of the Level is : 0 to %d \n", N-1);

    do
        { printf("Enter the value within the level:\n");
    scanf("%d", &n);
    P = (n / (double)(N-1))*100 ;
    printf("the battery status: %f \n",P);
    printf("Do you want to change the level, Press 1 to continue or press any key to exit:\n");
scanf("%d", & sel);
    }
    while(sel==1);


}


