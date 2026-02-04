#include<iostream>

void fun(int x) throw (int,double){
    if (x==1)
        throw -1;
        else if(x==2)
        throw 'A';
        else if(x==3)
        throw 10.5;

}
int main(){
    int x;
    std::cin>>x;
    
    try{
        fun(x);
    }catch(int i){
    std::cout<<"int "<<std::endl;
    }catch(double){
        std::cout<<"double"<<std::endl;
    }
    std::cout<<"end main"<<std::endl;
    return 0;
}