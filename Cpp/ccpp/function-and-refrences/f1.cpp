//code Mangling
//here the compiler will change the name of the function (internally ) with the help of compiler ....

#include<iostream>

int add(int x,int y){               //addii()
    return x+y;
}
int add(int x,int y,int z){         //addiii() internal names given by compiler 
    return x+y+z;
}
int main(){
    std::cout<<add(10,20)<<std::endl;
    std::cout<<add(10,20,30)<<std::endl;
    return 0;
}