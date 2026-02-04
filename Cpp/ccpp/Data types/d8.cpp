//inline function
//function add(x,y) return(x+y)

#include<iostream>
 
#define sum(x,y) x+y
#define z 500

int main(){
    int x=10;
    int y=30;
    std::cout<<sum(x,y)<<std::endl;
    std::cout<<z<<std::endl;
    return 0;
}