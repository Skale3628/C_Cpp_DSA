//template

#include<iostream>
template<typename T,typename U>
T min(T x,U y){                                      //T for int and U for  float  or double
    return (x<y)? x:y;
}


int main(){
   
    std::cout<<min(30,20.5f)<<std::endl;
    return 0;
}