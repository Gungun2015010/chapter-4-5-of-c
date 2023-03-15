//understand
#include<stdio.h>
float force(float mass);
int main(){
    float m;
    printf("enter the value\n");
    scanf("%f",&m);
    printf("the value is %f\n",force(m));
    return 0;
}
float force (float mass){
    float result;
    result = mass * 9.8;
    return result;
}