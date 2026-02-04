#include<iostream>

class demo{
    int x=10;
    protected:
    int y=20;

    public:
    demo(){
        std::cout<<"constructor"<<std::endl;

    }
    void getdata(){
        std::cout<<"x="<<x<<std::endl;
        std::cout<<"y="<<y<<std::endl;
    }
    friend void accessdata(demo& obj);
};
void accessdata( demo& obj){
    
       int temp=obj.x;
       obj.x=obj.y;
       obj.y=temp;
}
int main(){
    demo obj;
      //std::cout<<obj.x<<std::endl;              //'int demo::x' is private within this context
       // std::cout<<obj.y<<std::endl;        //'int demo::y' is protected within this context
       obj.getdata();
       accessdata(obj);
       obj.getdata();
        return 0;

}