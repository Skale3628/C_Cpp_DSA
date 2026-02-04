#include<stdio.h>
int* fun(int x){
    int y = x + 10;
    return &y;
}
int main(){
    int x=10;
    int *ptr=fun(x);
    printf("%d\n",*ptr);
}