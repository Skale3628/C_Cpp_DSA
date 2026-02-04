#include<stdio.h>
void fun(int[],int);
int main(){
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    fun(arr,size);
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    
}
void fun(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=arr[i]+10;    }
}