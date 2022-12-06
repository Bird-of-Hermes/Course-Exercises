#include <iostream>
#include <climits>

using namespace std;

short isShort(int a);
int isInt(long long a);

int main()
{
    int integer;
    cout << "Input an integer value: ";
    cin >> integer;
    if (isShort(integer) == true)
    {
        cout << integer << " fits in 16 bits.\n";
    }
    else
    {
        cout << integer  << " does not fit in 16 bits.\n";
    }
    if (isInt(integer) == true)
    {
        cout << integer << " fits in 32 bits.\n";
    }
    else
    {
        cout << integer << " does not fit in 32 bits.\n";
    }

    return 0;
}

short isShort(int a)
{
    bool b;
    if (a >= SHRT_MIN && a <= SHRT_MAX)
    {
        b = true;
    }
    else
    {
        b = false;
    }
    return b;
}

int isInt(long long a)
{
    bool b;
    if (a >= INT_MIN && a <= INT_MAX)
    {
        b = true;
    }
    else
    {
        b = false;
    }
    return b;
}