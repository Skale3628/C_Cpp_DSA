//structur assignment 

#include<stdio.h>
struct cricplayer{
    //char pname[20] = "virat kholi";          //no initialization in structure
    char pname[20];
    int jerno;
    float avg;
}obj2 = {"dhoni",7,99.98};
void main(){
    struct cricplayer obj = {"virat",18,99.98};
    printf("%ld\n",sizeof(struct cricplayer));
    printf("%s\n",obj.pname);
    printf("%d\n",obj.jerno);
    printf("%f\n",obj.avg);

    printf("so the output for obj 2 will be \n");

    printf("%s\n",obj2.pname);
    printf("%d\n",obj2.jerno);
    printf("%f\n",obj2.avg);

}