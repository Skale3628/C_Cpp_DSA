#include<stdio.h>
void main(){
    char ch;
    printf("are you alive\n");
    printf("enter your choice y or n \n");
    scanf("%c",&ch);
    printf("%c",ch);

    if(ch=='Y'|| ch=='y'){
        printf(" will die soon\n");
    }
    else{
        printf("you are dead\n");
    }
}