#include <iostream>

using namespace std;

struct chocolate
{ 
    char brand[15];
    float weight;
    unsigned short calories;
};

int main()
{
    chocolate vector[3];

    for (size_t i = 0; i < 3; i++)
    {
        cout << "Insert the chocolate's brand name for item number " << i+1 << ": ";
        cin  >> vector[i].brand;
        cout << "Enter the number of calories " << vector[i].brand << " chocolate has: ";
        cin  >> vector[i].calories;
        cout << "Enter the " << vector[i].brand << " chocolate's weight for item number " 
             << i+1 << ": ";
        cin  >> vector[i].weight;
    }
    for (size_t i = 0; i < 3; i++)
    {
        cout << vector[i].brand << " has " << vector[i].calories << " calories and weights " 
             << vector[i].weight << " grams." << endl;
    }
    
    return 0;
}

// Initially the exercise was for I to initialize all of the vectors myself but I did it in a way
// that a real world application would be (kind of).

// a real world application would at least allow for the user to stop inserting data and there would be
// an if before std::cout to verify the need to add a ' after the brand name was entered.