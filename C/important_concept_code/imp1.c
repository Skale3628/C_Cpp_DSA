//important code for the allignment of int and float and char

#include<stdio.h>
void main(){
    int no_of_persons ;
    char row_or_column ;
    float price;
    printf("movie plan\n");

    printf("which row or column have been given\n");
    scanf("%c",&row_or_column);
   
    printf("no of friends coming\n");
    scanf("%d",&no_of_persons);
    

    
    printf("total ticket price for the movie\n");
    scanf("%f",&price);
   

    printf("total ticket price for the movie=%d\n",no_of_persons);
    printf("which row or column have been given=%c\n",row_or_column);
    printf("total ticket price for the movie=%f\n",price);


}