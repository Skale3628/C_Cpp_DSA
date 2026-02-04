#include<iostream>
#include<fstream>

int main(){
    std::ofstream outfile("core2web.txt");
    std::string inputdata;
    getline(std::cin,inputdata);
    outfile<<inputdata;
    outfile.close();
    return 0;
}