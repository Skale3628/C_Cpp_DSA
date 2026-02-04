//stack 

#include<stdio.h>
int top=-1;    //illegal idex
int arr[5];

void push(int data){
    top =top+1;        //top++
    arr[top]=data;
}

void main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    for(int i=top;i>=0;i--){
        printf("|%d|",arr[i]);
    }
    printf("\n");
}