#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int gusses,number,ngusses=1;
    number=rand()%100+1;
    srand(time(0));
    do{
printf("gusse the number 1 to 100\n");
scanf("%d",&gusses);
if(gusses<=number){
    printf("higher number please\n");
}
else if(gusses>=number){
    printf("lower number please\n");
}
else{
    printf("you gusse it in %d\n",ngusses);
}
ngusses++;
}while(gusses!=number); 
}