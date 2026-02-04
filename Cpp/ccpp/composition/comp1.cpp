#include<iostream>

class employee{
    std::string ename=" khana ";
    int empid= 255 ;
    public:
    employee(){
        std::cout<<"constructor"<<std::endl;
    }
    void getinfo(){
        std::cout<<ename<<" "<<empid<<std::endl;
    }
    ~employee(){
        std::cout<<"destructor1"<<std::endl;
    }
};
class company{
    std::string cname="veritas";
    int stremp=1000;
    employee obj;

    public:
    company(std::string cname,int stremp=0){
        this->cname=cname;
        this->stremp=stremp;
    }
    void getinfo(){
        std::cout<<cname<<""<<stremp;
        obj.getinfo();

    }
     ~company(){
        std::cout<<"destructor2"<<std::endl;
    }
};
int main(){
    company obj(" pubmatic ", 5000 );
    obj.getinfo();
    return 0;
}