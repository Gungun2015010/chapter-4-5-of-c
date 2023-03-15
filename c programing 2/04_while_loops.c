#include<stdio.h>
int main(){
    //while loop
    int a;
    printf("enter any number\n");
    scanf("%d",&a);
    while(a<=10){
        printf("the value is print %d\n",a+2);
        a++;
    }
    return 0;
}