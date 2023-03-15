#include<stdio.h>
int main(){
    int i,factorial=1;
    for(i=1;i<=4;i++){
        factorial=factorial*i;
        printf("the factorial %d is %d\n",i,factorial);
    }
    return 0;
}