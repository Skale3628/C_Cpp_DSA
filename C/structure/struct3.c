#include<stdio.h>

struct movie{
    char mname[20];
    int noofticket;
    float price;
} obj1={"kantara",2,300};

void fun(){
    struct movie obj3={"tiger",4,500};                                                                
    printf("%s\n",obj3.mname);
    printf("no of ticket %d\n",obj3.noofticket);
    printf("price is %f\n",obj3.price);
}
void main(){
    struct movie obj2={"ramayan",3,600};

    fun();

    printf("%s\n",obj1.mname);   
    printf("no of ticket %d\n",obj1.noofticket);                                                                     
    printf("price is %f\n",obj1.price);

    printf("%s\n",obj2.mname);
    printf("no of ticket %d\n",obj2.noofticket);
    printf("price is %f\n",obj2.price);
}
