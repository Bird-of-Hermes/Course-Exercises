#include <iostream>
using namespace std;

int main()
{
    cout << "How many lines do you want to draw? ";
    uint32_t Nlines;
    cin >> Nlines;
    for (int y = 1; y <= Nlines; y++)
	{
		for (int x = 1; x <= (Nlines-y); x++)
		{
			cout << ".";
		}
		for (int x = 1; x <= y; x++)
		{
			cout << "*";
		}
		cout << endl;
	}
}