#include<iostream>
class parent{
    public:
   //void* _vptr;               //it will initialize under constructor 
    virtual void getdata(){
        std::cout<<"parent getdata"<<std::endl;
    }
};
class child:public parent{
    public:
    void getdata(){
        std::cout<<"child getdata"<<std::endl;
    }
};
int main(){
    //parent *obj=new child();
    //obj->getdata();
    child obj;
   // std::cout<<obj._vptr<<std::endl;        //_vptr  is private so we can't access directly.
                                                //But it will be initialized when object of derived class is created.
    return 0;

}