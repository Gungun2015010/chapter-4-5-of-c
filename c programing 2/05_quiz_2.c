#include<stdio.h>
#include<math.h>
void area();
int main(){
    area();
    return 0;
}
void area(){
    int squar;
    printf("enter number to calculate the area of a squar\n");
    scanf("%d",&squar);
    printf("the area of squar is %f\n",pow(squar,2));
}