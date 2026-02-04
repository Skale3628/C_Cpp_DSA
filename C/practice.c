#include<stdio.h>
void main(){
   int x;
   printf("enter a number\n");
   scanf("%d",&x);
   printf("%d",x);

   if(x%4==0 && x%5==0){
      printf("%d is divisible by 4 and 5\n",x);
   }
   else{
      printf("%d is not divisible\n");
   }

} 
//to find the quotient and reminder of the given number using arithmatic operator (/,%)
/*#include<stdio.h>
void main(){
   int x=20;
   int sum;
   sum=x/20;
   printf("%d",sum);

}*/