#include<iostream>
#include<fstream>

int main(){
    std::ofstream outfile("incubetor.txt");

    outfile<<"flutter\n";
    outfile<<"frontend\n";
    outfile<<"backend\n";

    outfile.close();
    //std::ofstream outfile("incubetor.txt",std::ios::app);
    //std::ofstream outfile("incubetor.txt");
   // outfile<<"salesforce\n";

    
    return 0;
}