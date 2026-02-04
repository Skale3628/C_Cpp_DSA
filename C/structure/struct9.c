//Nested Structure

#include<stdio.h>
#include<string.h>

struct movieinfo{
        char actor[20];
        float imbdrate;
    };

struct movie{
    char mname[20];
    struct movieinfo obj1;
};
void main(){

     struct movie obj2={"tumbbad",{"sohanshah",8.8}};    //second method
   
    //struct movie obj2;                //first method
   /* strcpy(obj2.mname,"kantaara");
    strcpy(obj2.obj1.actor,"rishabh");
    obj2.obj1.imbd=9.7;
  */

    printf("%s\n",obj2.mname);
    printf("%s\n",obj2.obj1.actor);
    printf("%f\n",obj2.obj1.imbdrate);
}