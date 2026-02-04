#include<iostream>
int main(){
    std::cout<<"start main"<<std::endl;
    try{
        throw 'A';
    }catch(int x){
        std::cout<<"exception handling"<<std::endl;
    }
    std::cout<<"end main"<<std::endl;
    return 0;
}