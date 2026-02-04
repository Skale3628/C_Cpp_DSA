#include<stdio.h>
#include<string.h>

struct picnic{
    char location[10];
    int count;
    float distance;
};

char* mystrcpy(char *dest,char *src){
    while(*src!='\0'){
        *dest=*src;
        dest++;
        src++;
    }
    *dest = "\0";
}
void main(){
    struct picnic obj1 ={"Goa",5,460.50};
    printf("%s\n",obj1.location);
     printf("%d\n",obj1.count);
     printf("%f\n",obj1.distance);
   
   printf("for obj 2 \n");

    struct picnic obj2;
    //obj2.location = "pune";                     //assignment to expression with array type --> obj2.location = "pune";
    mystrcpy(obj2.location,"pune");
    obj2.count =2;
    obj2.distance=378.90;

     printf("%s\n",obj2.location);
     printf("%d\n",obj2.count);
     printf("%f\n",obj2.distance);
}