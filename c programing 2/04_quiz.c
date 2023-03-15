//print natural number from 10 to 20 when initial loop counter is initialized to 0
#include<stdio.h>
int main(){
    int a;
    printf("enter any number\n");
    scanf("%d",&a);
    while(a<=20 && a>=10){
        printf("the number is %d\n",a);
        a++;
    }
}