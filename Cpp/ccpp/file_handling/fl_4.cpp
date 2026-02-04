#include<iostream>
#include<fstream>

int main(){
   // std::ifstream infile("incubetor.txt");
    std::ifstream infile("Binecaps.txt");           //access data from a file which does not exist
    std::string inputdata;
    while(infile){
        getline(infile,inputdata);
        std::cout <<inputdata<<std::endl;
    }
    std::cout<<"here"<<std::endl;
    infile.close();
    return 0;
}