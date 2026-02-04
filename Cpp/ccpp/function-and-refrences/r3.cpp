#include<iostream>
int& fun(int x){                //warning: reference to local variable 'y' returned
    int y=x;
    return y;           
}

int main(){
    int a=50;
    int ret =fun(a);
    std::cout<<ret<<std::endl;
    return 0;
}