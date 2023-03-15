#include<stdio.h>
int avrage(int a,int b,int c);

int main(){
    int d;
  d = avrage(4,7,9);
 printf("the avrage of %d\n",d);
return 0;
}
int avrage(int a,int b,int c)
{

return (a*b*c)/3;
}