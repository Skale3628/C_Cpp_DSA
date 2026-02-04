//virtual distructor

#include<iostream>

class parent{
    public:
    parent(){
        std::cout<<"parent constructor"<<std::endl;
    }
    virtual ~parent(){
        std::cout<<"parent constructor"<<std::endl;
    }
};
class child : public parent{
    int *ptr=NULL;
    public:
    child(){
        ptr=new int[5];
        std::cout<<"child constructor"<<std::endl;
    }
    ~child(){
        std::cout<<"child destructor"<<std::endl;
        delete [] ptr;
    }
};
int main(){
    parent *obj=new child();
    delete obj;
    return 0;
}