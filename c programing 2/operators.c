#include<stdio.h>
int main(){
    int a=3 , b=2 ;//pehele ye conver krega 3 or 2 ko binary formate me,vo ki 3 ki binary hogi(11) or 2 ki binary hogi 10 ab ye inn dono ka AND operator nikalega 3 + 2 ka AND (10=2)[dono value true hone pr 1 dega or ak bhi false hone pr 0]
    printf("%d",a & b);
    return 0;
}