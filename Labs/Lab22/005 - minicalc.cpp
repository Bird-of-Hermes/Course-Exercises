#include <iostream>
using namespace std;

int main()
{
    double a{}, b{};
    int type;
    do
    {
        cout << "Enter 2 operands (A B): ";
        cin >> a >> b;
        cout << "1. To add" << endl << "2. To subtract" << endl 
             << "3. To multiply" << endl << "4. To divide. (any other to leave)\n";
        cin >> type;
        switch (type)
        {
            case 1: cout << "Answer = " << a+b << endl; break;
            case 2: cout << "Answer = " << a-b << endl; break;
            case 3: cout << "Answer = " << a*b << endl; break;
            case 4: cout << "Answer = " << a/b << endl; break;
            default: return 0;
        }
    }while (type == 1 || type == 2 || type == 3 || type == 4);
    
    return 0;
}