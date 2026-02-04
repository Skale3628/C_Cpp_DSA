#include<stdio.h>
void main(){
    int startnum,endnum;
    printf("enter the starting number\n");
    scanf("%d",&startnum);
    printf("enter the end value\n");
    scanf("%d",&endnum);
    while(startnum <= endnum){
        if(startnum%4==0 && startnum%5==0){
            printf("%d\n",startnum);
        }
        startnum++;
    }

}