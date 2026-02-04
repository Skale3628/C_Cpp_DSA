//Passing Structure to a Function


#include<stdio.h>

struct demo{
    int x;
    float y;
};
void fun(struct demo obj){
    printf("%d\n",obj.x);
    printf("%f\n",obj.y);
}
void gun(struct demo *ptr){
    printf("%d\n",ptr->x);
    printf("%f\n",(*ptr).y);
}
void main(){
    struct demo obj={10,20.5f};
    fun(obj);                       //passing object to a function 
    gun(&obj);                       //passing add of object to a function
}




//output
/*
10
20.500000
10
20.500000
*/