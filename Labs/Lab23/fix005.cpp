#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    char filename[25], wordtosearch[20], scrapreader[20];
    bool found = false;

    cout << "Enter the name of the text file you want to open: ";
    cin >> filename;
    cout << "Enter the word you want to search: ";
    cin >> wordtosearch;

    ifstream fin;
    fin.open(filename);
    if(!fin.is_open())
    {
        cout << "Couldn't open the file -(((ERROR: IFSTREAM)))-";
        exit(EXIT_FAILURE);
    }
    
	while (fin >> scrapreader && !found)
	{
		if (strcmp(scrapreader, wordtosearch) == 0) // strcmp returns 0 (false) if both are equal
			found = true;
        else
            found = false;
	}

    if (found)
    cout << "The word " << wordtosearch << " is present in the file you entered";
    else
    cout << "No occurences of the word appear on the file you entered";

    fin.close();
    return 0;
}