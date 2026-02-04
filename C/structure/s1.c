//structure

#include<stdio.h>
#pragma pack(1)                    //to save memory from being waste not mandatory

struct demo{
    //float avg;
    //int jerno;
    //char ch1;              //size 8 byte 
    //int x;
    //float avg;
    //char *ch2;
    //int y;
    //double arr[5];  
    char sname[20];
    int tteams;
    double prize;

    //double grade1;
    //double grade2;
    //float avg;
};

void main(){
    //struct demo obj;
    //printf("Size of obj: %ld bytes\n",sizeof(obj));
    //printf("Size of demo struct: %ld bytes\n",sizeof(struct demo));

     printf("Size of obj: %ld bytes\n",sizeof(struct demo));
}