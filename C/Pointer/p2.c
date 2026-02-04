#include<stdio.h>
void main(){
    int x=10;
    int y=20;

    int *ptr1=&x;
    int *ptr2=&y;

    //char ch= 127 ;
    
    printf("%p\n",ptr1);
    printf("%p\n",ptr2);

   printf("%d\n",*ptr1 +*ptr2);
    //printf("%d\n",ptr2+ptr2);
    //printf("%d\n",*(ptr+'A'));
}

