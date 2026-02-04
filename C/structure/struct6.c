//malloc and struct

#include<stdio.h>
#include<stdlib.h>
//void *malloc(size_t);

struct ipl{
    char sname[20];
    int tteams;
    float prize;

};
void main(){
    
  /*  int *ptr=(int *)malloc(sizeof(int));
    *ptr=50;
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    free(ptr);
    printf("%d\n",*ptr);
 */
    struct ipl *ptr=(struct ipl *)malloc(sizeof(struct ipl));
    strcpy(*ptr.sname,"tata");
    *ptr.tteams=8;
    *ptr.prize=1000000;

}