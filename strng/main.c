#include <stdio.h>
#include <stdlib.h>

int main()
{ int i=0,j;
    char str[20], name[20];
 printf("enter the string:\n");
    scanf("%s",name);
    printf("Enter the character:\n");
    scanf("%s",str);
for (i=0;i<=strlen(name)-1;i++)
{

    for(j=0;j<=strlen(str)-1;j++)
{

    if(str[j]==name[i])
   {
       printf("character '%c' is  as '%c' present\n", name[i], str[j]);
   }

 }

}
 printf("Exit");
}
