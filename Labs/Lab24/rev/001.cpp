#include <fstream>
#include <iostream>

struct Fishes
{
    char Species[20];
    uint16_t Weight;
    uint16_t Lenght;
};

int main()
{
    std::ifstream fish;
    fish.open("pescado.txt");
    if(!fish.is_open())
    {
        std::cerr << "File couldn't be open IFSTREAM ERROR";
        exit(EXIT_FAILURE);
    }
    Fishes AquariumFishes;
    uint64_t Sum = 0;
    fish >> AquariumFishes.Species;
    while(fish.good())
    {
    fish >> AquariumFishes.Weight;
    fish >> AquariumFishes.Lenght;
    Sum += AquariumFishes.Weight;
    fish >> AquariumFishes.Species;
    }
    std::cout << Sum;
    fish.close();

    exit(EXIT_SUCCESS);
}