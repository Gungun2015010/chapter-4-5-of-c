#include <stdio.h>
int main()
{
    int sum = 0, i = 0;
    printf("enter any number\n");
    /*while (i <= 10)
    {
        sum = sum + i;
        printf("%d\n", sum);
        i++;
    }*/

    /*qustion 6
    //  for(i=0 ;i<=10;i++)
    //  {
    //      sum=sum+i;
    also write sum=+i;
    //      printf("%d\n",sum);
    }*/
    do
    {
        sum = sum + i;
        printf("%d\n",sum);
        ++i;
    } while (i <= 10);
    return 0;
}