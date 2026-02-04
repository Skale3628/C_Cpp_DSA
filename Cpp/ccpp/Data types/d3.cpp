//Variable initialization 

#include<iostream>
int main(){
    int x=10;            //copy initialization 
    int y(20);          //Direct initialization 
    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
    int z {30};         //Uniform initialization 
    std::cout<<z<<std::endl;
    return 0;

}