//using functions instead of constructor

#include<iostream>
#include<fstream>

int main(){
    std::ofstream outfile;
    
    outfile.open("cppend.txt");

    outfile<<"lasttopic\n";
    outfile.close();
    return 0;
}