//Bit Field

#include<stdio.h>
#pragma pack(1)

struct demo {
    //char ch;
   // int x:2;
    //int y:2;

    int x:9;
    int y;

    //int x:5;
};
void main(){
   printf("%ld\n",sizeof(struct demo));

  // struct demo obj={5,15};
   //printf("%d\n",obj.x);
  // printf("%d\n",obj.y);

   //struct demo obj={10};
   //printf("%d\n",obj.x);


}