#include<iostream>

void elesearch(int arr[],int size,int ele){
    int flag=0;
    int i;

    for(int i=0;i<size;i++){
        if(arr[i]==ele)
        {
            flag = 1;
            break;
            }
}
try{
    if(flag == 1)
    std::cout<<"element found at index"<<i<<std::endl;
    else
    throw "number not found";
}catch(const char *str){
    std::cout<<str<<std::endl;
    throw;
}
}
int main() {
    int arr[]={10,20,30,40,50};
    int search;
    std::cin>>search;
    try{
        elesearch(arr ,5,search);
    }catch(const char* str){
        std::cout<<"catch in main:"<<str<<std::endl;
    }
return 0;

}