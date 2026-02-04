//Enumeration
//The Enumeration class is used to create a list of constants. It allows you to define a set of values that can be used in your code/program...
//it makes the code more readable....... 
//>>============================================================================<<//

#include<stdio.h>

enum entc{
    yash,               //0
    raj,                //1
    shubham,            //2   
    atharva,            //3        
};
void main(){
    enum entc obj;
  

    printf("%ld\n",sizeof(obj));
    //printf("%d\n",obj.yash);                    // error : request for member 'yash' in something not a structure or union
    
    //Accesing Enum Elements
    printf("%d\n",yash);
     printf("%d\n",atharva);
      printf("%d\n",shubham);
      
      //another way
      int x=yash;
      printf("%d\n",x);
}


//output;
/*
4
0
3
2
*/