#include <iostream>
#include <fstream>


int main() {
    std::ofstream myfile;
    myfile.open ("../artifacts/example.txt");
    myfile << "Writing this to a file!\n";

    if(myfile.is_open())
        std::cout << "File has been written to!\n";
    else
        std::cout << "File did not open!\n";


    myfile.close();


    return 0;
}
