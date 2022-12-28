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
    std::ifstream fish;
    fish.open("pescado.txt");
    if(!fish.is_open())
    {
        std::cerr << "File couldn't be open IFSTREAM ERROR";
        exit(EXIT_FAILURE);
    }
    std::ofstream WFish;
    WFish.open("pescado003.bin", std::ios_base::out | std::ios_base::binary);
    if(!WFish.is_open())
    {
        std::cerr << "File couldn't be open OFSTREAM ERROR";
        exit(EXIT_FAILURE);
    }
    
    Fishes AquariumFishes;
    fish >> AquariumFishes.Species;
    while(fish.good())
    {
    fish >> AquariumFishes.Weight;
    fish >> AquariumFishes.Lenght;
    WFish.write((char*)&AquariumFishes, sizeof(AquariumFishes));
    fish >> AquariumFishes.Species;
    }

    fish.close();
    WFish.close();
    exit(EXIT_SUCCESS);
}