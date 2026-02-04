#include<stdio.h>
void main(){
    int money;
    printf("enter value\n");
    scanf("%d",&money);
    printf("%d",money);
    if(money >= 5500){
        printf("it can be affordable\n");
    }
    else if(money >= 2000){
        printf("it is not affordable \n");
    }
    else if(money >= 100){
        printf("not at alll\n");
    }
    else{
        printf("ghari bsssss\n");
    }
    
}