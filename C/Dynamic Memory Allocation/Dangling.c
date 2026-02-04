#include<stdio.h>
#include<stdlib.h>
//void* malloc(size_t);

void danglingptr(int x){
    int *ptr1=(int *)malloc(sizeof(int));
    //ptr1 = x;                                               //warning: assignment makes pointer from integer without a cast [-Wint-conversion]
    *ptr1=x;
    //int *ptr2= NULL;
    printf("%d\n",ptr1);
    printf("%d\n",*ptr1);
    int *ptr2 = ptr1;
    printf("%d\n",*ptr2);
    free(ptr1);
    printf("%d\n",*ptr2);
}
void main(){
    danglingptr(20);
}
