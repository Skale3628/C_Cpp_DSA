//Union

#include<stdio.h>
#include<string.h>

//struct book {
union book{
    char bname[20];
    char authorname[20];
    int pages;
   //double price;
};
void main(){
    union book bk ;/*={"OS","AG",350,450.50}*/
    //union book bk1={"OS","AG",350,450.50};
    strcpy(bk.bname,"os");
    printf("book name is %s\n",bk.bname);

    printf("%ld\n",sizeof(bk));

   // printf("%p\n",&bk.bname);
    //printf("%p\n",&bk.authorname);
   // printf("%p\n",&bk.pages);
   // printf("%p\n",&bk.price);
    
   /* printf("%p\n",&bk1.bname);
    printf("%p\n",&bk1.authorname);
    printf("%p\n",&bk1.pages);
    printf("%p\n",&bk1.price);
    */

}