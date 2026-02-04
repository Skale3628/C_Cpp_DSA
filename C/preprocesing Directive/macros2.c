//macros
//function like macros

#include<stdio.h>
#define add(a,b) a+b
#define sqr(x) x*x

//#undef add

void main(){
    int x=10;
    int y=20;
    printf("%d\n",add(x,y));
    #undef add
    printf("%d\n",sqr(x));
}

//output
//--> 30
//--> 100