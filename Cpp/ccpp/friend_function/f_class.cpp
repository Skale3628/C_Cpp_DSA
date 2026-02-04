//friend class

#include<iostream>
class two;          //forward declaration of class

class one{
    int x=10;
    
    
    protected:
    int y=20;

    public:
    one(){
    
       std::cout<<"one constructor"<<std::endl;
    }
   friend class two;
};
class two{
    
    public:
    two(){
        std::cout<<"two constructor"<<std::endl;
    }
    private:
     void getdata(const one& obj){
        std::cout<<obj.x<<std::endl;
        std::cout<<obj.y<<std::endl;
     }
     public:
     void accessdata(const one& obj){
         std::cout<<obj.x<<std::endl;
        std::cout<<obj.y<<std::endl;

     }
};

int main(){
    one obj1;
    two obj2;
   obj2.accessdata(obj1);
    return 0;
}
