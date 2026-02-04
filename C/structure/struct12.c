//Unnamed Structure
//This is a structure that has no name. It can be used to store data without giving it a name, which can make the code more compact
//===============================================

#include<stdio.h>

struct {
    int x;
    int y;
}obj = {10,20};

void main(){
    
    printf("%d\n",obj.x);
    printf("%d\n",obj.y);
}