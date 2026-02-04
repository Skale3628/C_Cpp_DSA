#include<stdio.h>
void main(){
    //char ch1='x';
    //char *ptr=&ch1;
    int arr[]={10,20,30,40};

    int *ptr1=&(arr[1]);
    printf("%p\n",ptr1);
    printf("%d\n",*ptr1);
    //printf("%p\n",(ptr+'A'));
    //printf("%c\n",*(ptr+'A')); //addition of pointer is only done with integer

    printf("%d\n",*(ptr1+2));

} 