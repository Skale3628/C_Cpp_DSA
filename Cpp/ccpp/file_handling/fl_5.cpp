#include<iostream>
#include<fstream>

int main(){
    std::ifstream infile("incubetor.txt");
    std::ofstream outfile("Binecaps.txt");

    std::string readdata;
    while(infile){
        getline(infile,readdata);
        outfile<<readdata<<std::endl;
    }
    infile.close();
    outfile.close();
    return 0;
}