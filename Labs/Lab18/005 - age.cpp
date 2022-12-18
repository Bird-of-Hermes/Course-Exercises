#include <iostream>
using std::cout, std::cin, std::endl;

int main()
{
    int Age{1}, Youngest{100}, Oldest{};
    size_t j{};
    cout << "Enter the age of the group: ";
    while (Age != 0)
    {
        cin >> Age;
        if (Age >= 18)
        {
            j++;
        }
        if (Age>Oldest)
        {
            Oldest = Age;
        }
        if (Age<Youngest)
        {
            if (Age != 0)
            {
                Youngest = Age;
            }
        }
        
    }
    cout << "In this group there's " << j << " people above or equal 18 years of age." << endl;
    cout << "The youngest is " << Youngest << " years old and the oldest is " << Oldest << " years old.";
}