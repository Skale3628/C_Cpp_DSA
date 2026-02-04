//Contitional Preprocessing
//Conditional pre-processing is a technique used in C and C++ programming languages to include or exclude certain code blocks based on the value of a
//==============================

//#include<stdio.h>      //Predefine header file 
#include"stdio.h"        //userdefine header file 
#define access 1

void main(){
    #if access
    printf("Access per...");
    //#endif
    #else
    printf("not access..\n");
    #endif

    printf("EOF\n");
}

//output
//for access 1
//--> Access per...EOF


//for access 0
//--> not access..
//    EOF