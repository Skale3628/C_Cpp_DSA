#include<stdio.h>
void main(){
    int age = 21;
    float petrol = 105.23 ;
    double gold = 20.33455354647842352 ;
    char wing = 'A';
    //void x=20;

    printf("%d\n",age);
    printf("%f\n",petrol);
    printf("%.12lf\n",gold);    //using ".12" we will get 12 decimal from the given data 
    printf("%c\n",wing);

    printf("%ld\n",sizeof(int));                  //size = 4
    printf("%ld\n",sizeof(float));                //size = 4   
    printf("%ld\n",sizeof(double));               //size = 8
    printf("%ld\n",sizeof(char));                 //size = 1

}
 