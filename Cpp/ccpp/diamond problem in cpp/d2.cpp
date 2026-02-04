#include<iostream>
class demo{
    public:
    demo(){
        std::cout<<"constructor demo"<<std::endl;
    }
};
class demochild1:public demo{
    public:
    demochild1(){
        std::cout<<"constructor demochild1"<<std::endl;
    }
};
class demochild2:public demo{
    public:
    demochild2(){
        std::cout<<"constructor demochild2"<<std::endl;
    }
};
class child : public demochild1 , public demochild2{
    public:
    child(){
        std::cout<<"constructor child"<<std::endl;
    }
};
int main(){
    child obj;
    return 0;
}