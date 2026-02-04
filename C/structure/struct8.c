//Array of Structure

#include<stdio.h>

struct player{
    char pname[20];
    int jerno;
    float rev;
};
void main(){
    struct player obj1={"virat",17,30000.00};
     struct player obj2={"messi",10,48000.00};
      struct player obj3={"lebron",6,95000.00};

    struct player arr[3]={obj1,obj2,obj3};
    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].pname);
        printf("%d\n",arr[i].jerno);
        printf("%f\n",arr[i].rev);
    }
}