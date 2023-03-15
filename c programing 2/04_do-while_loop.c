#include<stdio.h>
int main(){
    int n,i=0;
    printf("enter any number\n");
    scanf("%d",&n);
    do{
printf("the number is%d\n",i+1);
i++;
    }while(n>i);
    return 0;
}