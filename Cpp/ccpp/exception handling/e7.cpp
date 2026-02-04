#include<iostream>
#include<exception>

class invalidindex: public std::runtime_error{
    public:
    invalidindex(std::string excep):std::runtime_error(excep){
    }
};

class demo{
    int arr[5]={10,20,30,40,50};
    public:
    int arrlength(){
        return(sizeof(arr)/sizeof(arr[0]));
    }
    int operator[](int index){
        if(index<0||index>=arrlength())throw invalidindex("bad index");
        return arr[index];
    }
};
int main(){
    try{
        //int size=-2;
        //int *arr=new int[size];

        demo obj;
        //try{
            //std::cout<<obj[-3]<<std::endl;
        //}catch(invalidindex& obj){
        //    std::cout<<"exception occured"<<obj.what()<<std::endl;
        //}
    }
    catch(invalidindex& obj){
        std::cout<<"exception occured"<<obj.what()<<std::endl;
    }
    return 0;
}