#include <fstream>
#include <iostream>
using std::cout, std::cin, std::endl;

int main()
{
    std::ofstream fout;
    std::ofstream fout1;

    fout.open("001binary.bin", std::ios_base::out | std::ios_base::binary);
    if (!fout.is_open())
    {
        std::cerr << "Error opening binary file";
        exit(1);
    }

    fout1.open("001text.txt");
    if (!fout1.is_open())
    {
        std::cerr << "Error opening text file";
        exit(1);
    }

    for (uint16_t i = 1; i <= 100; i++)
    {
     fout.write((char*)&i, sizeof(uint16_t));
     fout1 << i;   
    }

    fout.close();
    fout1.close();

    return 0;    
}

//each character in a text file is a char(1byte) long while in the binary files every information depends
//on the type of data written, so a number might weights different on both files.