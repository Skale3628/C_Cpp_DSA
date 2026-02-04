//friend class

#include<iostream>
//class two;          //forward declaration of class
class one;         //forward declaration of class
class two{              //member function
    
    public:
    two(){
        std::cout<<"two constructor"<<std::endl;
    }
     public:
     void accessdata(const one& obj);
};   
class one{                  //friend  member function
    int x=10;
    protected:
    int y=20;

    public:
    one(){
    
       std::cout<<"one constructor"<<std::endl;
    }
   friend void two::accessdata(const one &obj);
};

void two::accessdata(const one& obj){
    std::cout<<obj.x<<std::endl;
    std::cout<<obj.y<<std::endl;
}
int main(){
    one obj1;
    two obj2;
    obj2.accessdata(obj1);
    return 0;
}
