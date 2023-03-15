#include <stdio.h>
int sum(int a, int b);
int main()
{
    int c;
    c = sum(7, 7);//7 and 7 are arguments
    printf("%d",c);
    return 0;
}
int sum(int a, int b)//a and b are peramiters
{
    int result;
    result = a * b;
    return result;
}