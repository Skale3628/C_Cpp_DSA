//template

#include<iostream>
template<typename T>
T min(T x,T y){                                        //the extra functions will be written by the compiler internally
    return (x<y)? x:y;
}


int main(){
    std::cout<<min('a','b')<<std::endl;
    std::cout<<min(30,20)<<std::endl;
    std::cout<<min(30.5f,20.5f)<<std::endl;
    return 0;
}