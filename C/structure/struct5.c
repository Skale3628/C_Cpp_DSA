#include<stdio.h>
#include<string.h>

struct ott{
    char pname[40];
    int account;
    float price;
    

};
void main(){
    struct ott obj1={"netflix",3,40.5};

     printf("%s\n",obj1.pname);
    printf("%d\n",obj1.account);
    printf("%f\n",obj1.price); 
  
    struct ott obj2;
    printf("enter platform name\n");
    gets(obj2.pname);
    printf("enter account number\n");
    scanf("%d",&obj2.account);
    printf("enter price of subscription\n");
    scanf("%f",&obj2.price);

   

    
    printf("%s\n",obj2.pname);
    printf("%d\n",obj2.account);
    printf("%f\n",obj2.price);
}
