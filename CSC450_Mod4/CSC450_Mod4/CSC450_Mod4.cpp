

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream theFile("CSC450_CT5_mod5.txt");
    theFile << "This is new text in this file.";
    theFile.close();

    return 0;
}

