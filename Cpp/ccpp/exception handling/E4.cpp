#include<iostream>

void gun(){
    std::cout<<"start gun"<<std::endl;
    throw -1;
    std::cout<<"end gun"<<std::endl;
}
void fun(){
    std::cout<<"start fun"<<std::endl;
    gun();
    std::cout<<"end fun"<<std::endl;
}
int main(){
    std::cout<<"start main"<<std::endl;
    try{
    fun();
    }catch(..){
        std::cout<<"handling code"<<std::endl;
    }
    std::cout<<"end main"<<std::endl;
    return 0;
}