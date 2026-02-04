#include<stdio.h>

void main(){
    int iarr[5];
    
    // Loop to take input from the user
    for(int i=0;i<5;i++){
        scanf("%d",&iarr[i]);
    }

    // Initialize the sum variable to 0
    int sum=0;

    // Loop to calculate the sum of all the elements in the array
    for(int i=0;i<5;i++){
        sum =sum+iarr[i];
    }

    // Print the sum of all the elements in the array
    printf("addition of array elements are %d\n",sum);

    }