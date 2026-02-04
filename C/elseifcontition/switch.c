#include<stdio.h>
void main(){
    int x;
    printf("enter valueinrange 1-5\n");
    scanf("%d",&x);
    

    switch(x){
        default:
            printf("wrong input\n");
        case 1:printf("one\n");
        break;
        case 2:printf("two\n");
        break;
        case 3:printf("three\n");
        break;
        case 4:printf("four\n");
        break;
        case 5:printf("five\n");
        
        

    }
}