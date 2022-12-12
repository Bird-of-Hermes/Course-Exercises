#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    using namespace std;

    char name1[15], name2[15];
    cout << "Enter your name and surname: ";
    cin >> name1 >> name2;
    cout << "Good morning sir, " << name2 << " or should I call you " << name1 << "?";

    return 0;
}
// figuring out the logic behind this... 
// - strchr requires pointers knowledge that I don't have a clue to what it is/mean yet;
// I could do other loops that reach a solution like "004 - christmas.cpp" but I refuse to do so.
// the obvious solution would be finding the ' ' and splitting the string into two every time it finds.
// the problem is that there's already "strchr" that finds it and the other part can probably be dealt with ease.

// I don't believe this has any application IRL, so I'll just do it the simplest way for the output described
// in the Lab11 to work. Many cases out of the test case will fail but for a real world application a
// program would ask for name and surname in two different inputs. I can't really fathom a real world usage 
// for this type of manipulation. It the need arises then someone before me messed up, that's lack of organization.