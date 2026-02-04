//friend function can be a friend of two class at a time 

#include<iostream>
class two;          //forward declaration of class

class one{
    int x=10;
    
    
    protected:
    int y=20;

    public:
    one(){
    
       std::cout<<"constructor"<<std::endl;
    }
    private:
    void getdata()const{
        std::cout<<"x="<<x<<std::endl;
        std::cout<<"y="<<y<<std::endl;

    }
    friend void accessdata(const one& obj1,const two& obj2);
};
class two{
    int a=10;
    protected:
    int b=20;
    public:
    two(){
        std::cout<<"two constructor"<<std::endl;
    }
    private:
     void getdata()const{
        std::cout<<"a="<<a<<std::endl;
        std::cout<<"b="<<b<<std::endl;
     }
     friend void accessdata(const one& obj1,const two& bj2);
};

void accessdata(const one& obj1,const two& obj2){
   obj1.getdata();
   obj2.getdata();
}
int main(){
    one obj1;
    two obj2;
    accessdata(obj1,obj2);
    return 0;
}
