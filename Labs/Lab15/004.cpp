#include <iostream>
using namespace std;

struct Places
{
    char Name[40];
    char Country[25];
    char Continent[20];
};

void Read(Places*, int);
void Display(Places*, int);

int main()
{
    cout << "How many places do want to visit during your next vacation? ";
    int NumPlaces;
    cin >> NumPlaces;
    Places * ptr = new Places[NumPlaces]; // creating dynamic allocated memory
    Read(ptr, NumPlaces);
    cout << "\n-----------------------------------\n" << endl; // formatting
    Display(ptr, NumPlaces);
    delete ptr; // releasing dynamic allocated memory
}

void Read(Places*ptr, int Size)
{
    cout << "\n\n"; // formatting. Needs 2 \n since the next cin.ignore() will ignore one of them
    cin.ignore(); // stops the conflict between "cin" and "cin.getline()"
   for (size_t i = 0; i < Size; i++)
   {
        cout << "Enter the data for place of number " << i+1 << "." << endl;
        cout << "Name of location: "; 
        cin.getline(ptr[i].Name, 40);
        cout << "Name of the country: ";
        cin.getline(ptr[i].Country, 25);
        cout << "Name of the continent: ";
        cin.getline(ptr[i].Continent, 20);
   }
}

void Display(Places*ptr, int Size)
{
    cout << "Showing the places you registered.\n" << endl;
    for (size_t i = 0; i < Size; i++)
    {
        cout << i+1 << ".Name: " << ptr[i].Name << "." << endl;
        cout << i+1 << ".Name of the country: " << ptr[i].Country << "." << endl;
        cout << i+1 << ".Name of the continent: " << ptr[i].Continent << "." << endl;
        if (i==Size-1)
        {
            cout << "\n" << endl;
            return;
        }
    cout << "-" << endl; // formatting
    }  
    
       // Doing multiple "couts" here to organize the code but it's not
       // necessary since every "<<" can do the same. "endl" could be  
       // switched for "\n" if you want to optimize it to the limit (diff<2%)
    
    cout << "\n"; // formatting
}