#include <fstream>
#include <iostream>
using std::cout, std::cin, std::endl, std::ofstream, std::ifstream, std::ios_base;
///////////////////////////////////////////
struct Soldier
{
    char Name[30];
    uint32_t Kills;
    uint32_t Deaths;
    uint32_t Matches;
    float KDA;
};
///////////////////////////////////////////
char Menu();
void Register();
void Update();
void Display();
///////////////////////////////////////////
int main()
{
    ifstream RR;
    RR.open("002soldier.bin", ios_base::in | ios_base::binary);
    if (!RR.is_open())
        Register();
    else
        RR.close();
    
    switch(Menu())
    {
        case 'n':
        case 'N': Register(); break;
        case 'd':
        case 'D': Display(); break;
        case 'u':
        case 'U': Update(); break;
        default: break;
    }
}
///////////////////////////////////////////
char Menu()
{
    char A;
    cout << "\n--Soldier--\n----------------\n[N]ew Soldier\n[U]pdate Soldier\n"
         << "[D]isplay (actual)\n[L]eave\n----------------\nOption: [ ]\b\b";
    cin >> A;
    cin.clear();
    cin.ignore();
    return A;
}
///////////////////////////////////////////
void Register()
{
    Soldier Data;
    cout << "Enter soldier info\nName: ";
    cin.getline(Data.Name, 30);
    cout << "Kills: ";
    cin >> Data.Kills;
    cout << "Deaths: ";
    cin >> Data.Deaths;
    cout << "Matches: ";
    cin >> Data.Matches;
    Data.KDA = (Data.Kills/Data.Deaths)/Data.Matches;
    ofstream W;
    W.open("002soldier.bin", ios_base::out | ios_base::binary);
    W.write((char*)&Data, sizeof(Soldier));
    W.close();
}
///////////////////////////////////////////
void Update()
{
    Soldier Update;
    uint16_t Kills, Deaths;
    ifstream RR;
    RR.open("002soldier.bin", std::ios_base::in | std::ios_base::binary);
    RR.read((char*)&Update, sizeof(Soldier));
    RR.close();
    ofstream WW;
    WW.open("002soldier.bin", std::ios_base::out | std::ios_base::binary);
    cout << "\n--Updating soldier (" << Update.Name << ") data--\nKills: ";
    cin >> Kills;
    cout << "Deaths: ";
    cin >> Deaths;
    Update.Kills += Kills;
    Update.Deaths += Deaths;
    Update.Matches++;
    Update.KDA = ((float)Update.Kills/(float)Update.Deaths)/(float)Update.Matches;
    WW.write((char*)&Update, sizeof(Soldier));
    WW.close();
}
///////////////////////////////////////////
void Display()
{
    Soldier Display;
    ifstream RR;
    RR.open("002soldier.bin", ios_base::in | ios_base::binary);
    RR.read((char*)&Display, sizeof(Soldier));
    RR.close();
    cout << "\n---Displaying Soldier---\nName: " << Display.Name
         << "\nKills: " << Display.Kills << "\nDeaths: " << Display.Deaths
         << "\nLifetime K/D: " << Display.KDA*Display.Matches 
         << "\nAverage KD/match: " << Display.KDA << "\nNumber of matches played: " << Display.Matches;
}