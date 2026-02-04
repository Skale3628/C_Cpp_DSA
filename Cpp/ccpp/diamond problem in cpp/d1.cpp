//dimond problem in cpp
//solve by using virtual base class

#include<iostream>

class demo{
    public:
    void getdata(){
        std::cout<<"demo::getdata"<<std::endl;
    }
};
class demochild1 : virtual public demo{

};
class demochild2 : virtual public demo{

};
class child : public demochild1,public demochild2{

};
int main(){
    child obj;
    obj.getdata();
    return 0;
}