/*
1  4  9  16 
 25  36  49
 64  81
 100
*/

#include<stdio.h>
int main(){
    int num=1;
    for(int i=1;i<=4;i++){
        for(int j=4;j>=i;j--){
            printf(" %d ",num*num);
            num++;
        }
        printf("\n");
    }
}