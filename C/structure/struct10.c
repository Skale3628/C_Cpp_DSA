//Passing Structure to a Function

#include<stdio.h>

struct demo{
    int x;
    float y;
};
void main(){
    struct demo obj= {10,20.5f};
    int arr[]={10,20,30,40,50};
    printf("%p\n",&arr[0]);
    printf("%p\n",arr);
    
    printf("%p\n",&obj.x);
    //printf("%p\n",obj);               //never use this 
    printf("%p\n",&obj);
}