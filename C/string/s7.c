//string library function
//strcmp

#include<stdio.h>
#include<string.h>

void main(){
    char *str1="shubham";
    char *str2="Shubhamk";

    if (strlen(str1)==strlen(str2)){
        printf("Strings are equal\n");
    }
    else{
        printf("Strings are not equal\n");
    }

    int diff=strcmp(str1,str2);
    if(diff==0){
        printf("string are equal\n");
    }else{
            printf("strings are not equal\n");    
}
}