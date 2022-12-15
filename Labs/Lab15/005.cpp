#include <iostream>
using namespace std;

struct ASCII 
{
    char Character;
    int CharacterInt;
};

ASCII* DoesSomething(ASCII); // might be easy to miss but this is a function pointer ASCII*() 
                             // not an ASCII() function
int main()
{
    ASCII Charmeleon; // random name
    ASCII*ptr = DoesSomething(Charmeleon);
    cout << "ASCII: " << ptr->Character << "\nInteger: " << ptr->CharacterInt << endl;
    delete ptr;

    return 0;
}

ASCII* DoesSomething(ASCII Charizard)
{
    cout << "Enter with an ASCII character: ";
    cin >> Charizard.Character;
    Charizard.CharacterInt = Charizard.Character; // making both have the same value
    ASCII*ptr = new ASCII;
    ptr = &Charizard;
    return ptr;
}