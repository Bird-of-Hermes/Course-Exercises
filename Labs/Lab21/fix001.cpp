#include <iostream>
#include <cstring>
using namespace std;

struct Donations
{
    char Name[25];
    float Donation;
};

int main()
{   // VARIABLES AND SUCH
    int Ndonors{};
    size_t CountingGP{}, CountingP{};
    cout << "How many donors? ";
    cin >> Ndonors;
    Donations *ptr = new Donations[Ndonors]{};
    // FILLING DATA
    for (size_t i = 0; i < Ndonors; i++)
    {
        cout << "Name #" << i+1 << ": ";
        cin.get();
        cin.getline(ptr[i].Name, 25);
        cout << "Donated: ";
        cin >> ptr[i].Donation;
        if (ptr[i].Donation >= 10000)
        CountingGP++;
        else
        CountingP++;
    }
    // D.A.M. GP AND P
    Donations *GreatPatrons = new Donations[CountingGP]{};
    Donations *Patrons = new Donations[CountingP]{};
    // COPYING PTR TO GP AND P;
    for (size_t i = 0, j = 0, k = 0; i < Ndonors; i++)
    {
        if (ptr[i].Donation >= 10000)
        {
        strcpy(GreatPatrons[j].Name, ptr[i].Name);
        GreatPatrons[j++].Donation = ptr[i].Donation; // j++ inside to save 1 instruction
        }
        else{
        strcpy(Patrons[k].Name, ptr[i].Name);
        Patrons[k++].Donation = ptr[i].Donation; // k++ inside to save 1 instruction
        }
    }
    // GP COUT
    cout << "\nGreat Patrons\n" << endl;
    if(CountingGP == 0)
    cout << "none";
    else
    {
    for (size_t i = 0; i < CountingGP; i++)
        cout << GreatPatrons[i].Name << " " << GreatPatrons[i].Donation << endl;
    }
    // P COUT
    cout << "\nPatrons\n" << endl;
    if (CountingP == 0)
        cout << "none";
    else
    {
    for (size_t i = 0; i < CountingP; i++)
    
        cout << Patrons[i].Name << " " << Patrons[i].Donation << endl;
    }
    // END
    delete ptr;
    delete GreatPatrons;
    delete Patrons;
    return 0;
}