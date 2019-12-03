#include <iostream>
#include <fstream>
#include <sys/stat.h>


int main() {
    std::ofstream myfile;
    mkdir("../artifacts", 0777);
    myfile.open ("../artifacts/example.txt");
    myfile << "Writing this to a file!\n";

    if(myfile.is_open())
        std::cout << "File has been written to!\n";
    else
        std::cout << "File did not open!\n";


    myfile.close();


    return 0;
}
