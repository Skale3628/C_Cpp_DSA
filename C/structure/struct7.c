//1Pointer to a Structure

#include<stdio.h>

struct movie{
    char mname[20];
    int count;
    float price;
} obj1={"tumbbad",3,1000.00};

void main(){
    struct movie *sptr=&obj1;

    printf("%s\n",obj1.mname);
     printf("%d\n",obj1.count);
      printf("%f\n",obj1.price);

       printf("%s\n",(*sptr).mname);
     printf("%d\n",(*sptr).count);
      printf("%f\n",sptr->price);
}