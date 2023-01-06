#include <fstream>
#include <iostream>

struct Labs
{
    short Num;
    short Rev;
    short Fix;
    short Learning;
};

void Night_Tempo(std::ifstream &, int, int Lines = 10);

int main()
{
    std::ifstream fin;
    fin.open("Exercise1.txt");
    if(!fin.is_open())
    {
        std::cerr << "Error opening file. Ifstream error";
        exit(1);
    }
    Night_Tempo (fin, 1);
    Night_Tempo (fin, 2);
    Night_Tempo (fin, 3);
    fin.close();

    return 0;
}

void Night_Tempo(std::ifstream & fin, int Unit, int Lines)
{
    Labs Exercise;
    short SumRev = 0, SumLearning = 0, SumFix = 0;
    std::cout << "\n-------------\n   Unit #" << Unit << "\n-------------\n";
    for (size_t i = 0; i < Lines; i++)
    {
        fin >> Exercise.Num; // reads 1 0 0 0
        fin >> Exercise.Rev; // reads 0 1 0 0
        fin >> Exercise.Fix; // reads 0 0 1 0
        fin >> Exercise.Learning; // reads 0 0 0 1
        SumRev += Exercise.Rev;
        SumLearning += Exercise.Learning;
        SumFix += Exercise.Fix;
    }
    short SumAll = SumRev+SumLearning+SumFix;

    std::cout << "Rev.: " << SumRev << "\nFix.: " << SumFix << "\nLearning: " << SumLearning 
              << "\n-------------\n" << "Total: " << SumAll << std::endl; 
}