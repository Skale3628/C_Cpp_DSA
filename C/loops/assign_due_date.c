/*write a program to print the countdown of days to submit the assignment
input:7
output:7 days remaining
       6 days remaining
       
       
       0 due date*/
#include<stdio.h>
void main(){
    int x;
    printf("enter no of days:\n");
    scanf("%d",&x);
    while(x > 0) { 
        printf("%d days remaining\n", x);
        x = x - 1; // Decrement for countdown

    }
    printf("due date is over\n"); // Final message when countdown is complete

            } 
    
    
    

