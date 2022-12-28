#include <fstream>
#include <iostream>

struct Fishes
{
    char Species[20];
    uint16_t Weight;
    float Lenght;
};

int main()
{
    Fishes Fish;

    std::ifstream RFish;
    RFish.open("pescado003.bin", std::ios_base::in | std::ios_base::binary); // to work with exercises, adapt "pescado"'s names.
    if(!RFish.is_open())
    {
        std::cerr << "File couldn't be opened IFSTREAM ERROR";
        exit(EXIT_FAILURE);
    }
    std::cout << "\nThe following are the stored fishes:\n\n";
    while(RFish.read((char*)&Fish, sizeof(Fish)))
    {
        std::cout << Fish.Species << " ";
        std::cout << Fish.Weight << " ";
        std::cout << Fish.Lenght << std::endl;
    }
    RFish.close();

    std::cout << "\n--Storing new fishes--\n\n";
    std::cout << "Species: ";
    std::cin >> Fish.Species;
    std::cout << "Weight: ";
    std::cin >> Fish.Weight;
    std::cout << "Lenght: ";
    std::cin >> Fish.Lenght;

    std::ofstream WFish;
    WFish.open("pescado.bin", std::ios_base::out | std::ios_base::app | std::ios_base::binary);
    if(!WFish.is_open())
    {
        std::cerr << "File couldn't be opened OFSTREAM ERROR";
        exit(EXIT_FAILURE);
    }
    WFish.write((char*)&Fish, sizeof(Fish));
    WFish.close();

    exit(EXIT_SUCCESS);
}