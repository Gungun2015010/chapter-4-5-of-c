#include<stdio.h>
int main(){
    int number,i;
    printf("ENTER THE NUMBER YOU MULTIPLICATION OF:\n");
    scanf("%d",&number);
    for(i=1;i<=10;++i)
    {
    printf("%d x %d = %d\n",number,i,number*i);
    }
}