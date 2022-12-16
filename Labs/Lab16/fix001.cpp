#include <iostream>
using namespace std;

enum Months {JAN,FEV,MAR,ABR,MAI,JUN,JUL,AGO,SET,OUT,NOV,DEZ};

uint32_t* ReadBookData();

int main()
{
    uint32_t *ptr = ReadBookData();
    cout << "This year it was sold: " << *ptr << endl;
    delete ptr;

    return 0;
}

uint32_t* ReadBookData()
{
    uint32_t *ptr = new uint32_t;
    uint32_t Sum = 0;
    uint32_t BooksSold[12];
    const char *Month[12][10] = 
    {{"january"},{"february"},{"march"},{"april"},{"may"},{"june"},
    {"july"},{"august"},{"september"},{"october"},{"november"},{"december"}};

    for (Months ind = JAN; ind <= DEZ; ind = Months(ind+1)) // important to remember this for ENUM types
    {
        cout << "How many books did you sell in this month of " << *Month[ind] << "? ";
        cin >> BooksSold[ind];
        Sum = Sum+BooksSold[ind];
    }
    *ptr = Sum;
    return ptr;
}

