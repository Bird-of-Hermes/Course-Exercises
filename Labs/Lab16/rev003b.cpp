#include <iostream>
using namespace std;

void ForLoop(int[]);

int main()
{
    int SV[5] = {15,29,48,10,35};
    ForLoop(SV);
    return 0;
}

void ForLoop(int SV[])
{
    int a;
    cout << "Enter a value: "; // works when you want the user to say how many he wants to see
    cin >> a;
    for (size_t i = 0; i < a; i++)
    {
        cout << SV[i] << endl;
    }
}
// using the same variable on exercise b)

/*  for (size_t i = 0;; i++)
        {
            if (SV[i] == '\0') // counts the index of a initialized vector, but it only works for strings
            {
                a = i;
                break;
            }
        }
*/
