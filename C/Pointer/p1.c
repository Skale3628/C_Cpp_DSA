#include<stdio.h>
void main(){
    double x=30.5;
    char y='A';
    double *ptr1=&x;
    char *ptr2=&y;

   /* printf("x is %d\n",x);
    printf("%p\n",&x);*/

     
     printf("%p\n",ptr1);
     printf("%p\n",ptr2);
     printf("%lf\n",x);
     printf("%c\n",y);
     printf("%lf\n",*ptr1);
     printf("%c\n",*ptr2);



}




