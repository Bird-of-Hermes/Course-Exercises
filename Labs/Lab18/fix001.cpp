#include <iostream>
using std::cout, std::cin, std::endl;

int main()
{
    int Sum{}, N{};
    cout << "Enter integer numbers (0 to end): ";
    cin >> N;
    while (N != 0)
    {
        Sum = Sum+N;
        cout << Sum << endl;
        cin >> N;
    }
}