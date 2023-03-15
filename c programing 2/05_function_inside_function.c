#include<stdio.h>
void a();
void b();
void c();
int main(){
     a();
    return 0;
}
void a(){
printf("a\n");
b();
}
void b(){
    printf("b\n");
    c();
}
void c(){
    printf("c\n");
}